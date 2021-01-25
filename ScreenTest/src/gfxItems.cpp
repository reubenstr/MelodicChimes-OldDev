#include "gfxItems.h"
#include <vector>
#include "Free_Fonts.h"
#include <TFT_eSPI.h>

GFXItems::GFXItems(TFT_eSPI *tft)
{
  this->tft = tft;
}

void GFXItems::Add(GFXItem gfxItem)
{
  gfxItems.push_back(gfxItem);
}

void GFXItems::AddElementToGroup(int groupId, int eId)
{
  if (groups.find(groupId) != groups.end())
  {
    groups[groupId].push_back(eId);
  }
  else
  {
    std::vector<int> newVector{eId};
    groups.insert(std::make_pair(groupId, newVector));
  }
}

GFXItem &GFXItems::GetGfxItemById(int eId)
{
  for (auto &b : gfxItems)
  {
    if (b.id == eId)
    {
      return b;
    }
  }
  return gfxItems[0];
}

void GFXItems::DisplayElement(GFXItem gfxItem)
{
  uint32_t backgroundColor = gfxItem.fillColor;
  if (gfxItem.isPressed)
    backgroundColor = gfxItem.activeColor;

  tft->setFreeFont(gfxItem.gfxFont);
  tft->setTextSize(gfxItem.textSize);
  tft->setTextColor(gfxItem.textColor);

  String text(gfxItem.text);

  if (gfxItem.cornerSize > 0)
  {
    tft->fillRoundRect(gfxItem.x, gfxItem.y, gfxItem.w, gfxItem.h, gfxItem.cornerSize, gfxItem.borderColor);
  }

  tft->fillRoundRect(gfxItem.x + gfxItem.borderThickness, gfxItem.y + gfxItem.borderThickness, gfxItem.w - gfxItem.borderThickness * 2, gfxItem.h - gfxItem.borderThickness * 2, gfxItem.cornerSize, backgroundColor);

  int textX;
  if (gfxItem.justification == Justification::Left)
  {
    textX = gfxItem.x;
  }
  else if (gfxItem.justification == Justification::Center)
  {
    textX = gfxItem.x + gfxItem.w / 2 - tft->textWidth(gfxItem.text) / 2;
  }
  else if (gfxItem.justification == Justification::Right)
  {
    textX = gfxItem.x + gfxItem.w - tft->textWidth(text);
  }
  else
  {
    textX = gfxItem.x;
  }

  int textY;
  textY = gfxItem.y + gfxItem.h / 2 - tft->fontHeight() / 2;

  tft->drawString(text, textX, textY);
}

void GFXItems::DisplayGfxItem(int id)
{
  for (auto const &b : gfxItems)
  {
    if (b.id == id)
    {
      DisplayElement(b);
    }
  }
}

void GFXItems::DisplayGroup(int groupId)
{
  if (groups.find(groupId) != groups.end())
  {
    for (auto const &gfxItemId : groups[groupId])
    {
      for (auto &b : gfxItems)
      {
        if (b.id == gfxItemId)
        {
          DisplayElement(b);
        }
      }
    }
  }
}

bool GFXItems::IsButtonInGroupPressed(int groupId, int *id)
{
  uint16_t x, y;
  bool buttonPressedFlag = false;

  if (tft->getTouch(&x, &y, 20))
  {
    if (groups.find(groupId) != groups.end())
    {
      for (auto const &eId : groups[groupId])
      {
        GFXItem &b = GetGfxItemById(eId);
        if (b.isPressable)
        {
          bool isButtonPressed = false;

          // Check if touch is contained in the boundry of the button.
          if (x >= b.x && x <= (b.x + b.w))
          {
            if (y >= b.y && y <= (b.y + b.h))
            {
              isButtonPressed = true;
            }
          }

          if (isButtonPressed)
          {
            buttonPressedFlag = true;
            *id = b.id;
            // Prevent button flashing when being held down.
            if (!b.isPressed)
            {
              b.isPressed = true;
              DisplayElement(b);
            }
          }
        }
      }
    }
  }
  else
  {
    // No touch detected, depress all buttons.
    if (groups.find(groupId) != groups.end())
    {
      for (auto const &gfxItemId : groups[groupId])
      {

        GFXItem &b = GetGfxItemById(gfxItemId);
        if (b.isPressed)
        {
          b.isPressed = false;
          DisplayElement(b);
        }
      }
    }
  }

  return buttonPressedFlag;
}