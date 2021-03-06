#include <TFT_eSPI.h>
#include "gfxItems.h"
#include "graphicsMethods.h"
#include "main.h"
#include "Free_Fonts.h"

extern TFT_eSPI tft;
extern GFXItems gfxItems;

void InitScreenElements()
{
  const int buttonMainW = 110;
  const int buttonMainH = 55;

  // Create and add buttons.
  const GFXfont *gfxFont = FF22;

  // All.
  gfxItems.Add(GFXItem(int(GFXItemId::Home), int(PageId::All), "HOME", 30, 10, buttonMainW, 35, TFT_BLACK, TFT_MAGENTA, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Configuration), int(PageId::All), "CONFIG.", 180, 10, buttonMainW, 35, TFT_BLACK, TFT_MAGENTA, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Calibration), int(PageId::All), "CALIB.", 330, 10, buttonMainW, 35, TFT_BLACK, TFT_MAGENTA, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Play), int(PageId::Home), "PLAY", 30, 220, buttonMainW, buttonMainH, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Pause), int(PageId::Home), "PAUSE", 180, 220, buttonMainW, buttonMainH, TFT_BLACK, TFT_YELLOW, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Stop), int(PageId::Home), "STOP", 330, 220, buttonMainW, buttonMainH, TFT_BLACK, TFT_RED, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Previous), int(PageId::Home), "PREV.", 30, 150, buttonMainW, buttonMainH, TFT_BLACK, TFT_BLUE, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Next), int(PageId::Home), "NEXT", 330, 150, buttonMainW, buttonMainH, TFT_BLACK, TFT_BLUE, TFT_WHITE, TFT_WHITE, gfxFont));

  // Configuration.
  gfxItems.Add(GFXItem(int(GFXItemId::Hourly), int(PageId::Configuration), "Yes", 20, 90, buttonMainW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::StartHour), int(PageId::Configuration), "900", 180, 90, buttonMainW, 35, TFT_BLACK, TFT_RED, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::EndHour), int(PageId::Configuration), "1300", 340, 90, buttonMainW, 35, TFT_BLACK, TFT_RED, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::TimeZone), int(PageId::Configuration), "EST -4 GMT", 20, 160, buttonMainW, 35, TFT_BLACK, TFT_BLUE, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Startup), int(PageId::Configuration), "Yes", 180, 160, buttonMainW, 35, TFT_BLACK, TFT_BLUE, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Song), int(PageId::Configuration), "Random", 20, 230, 270, 35, TFT_BLACK, TFT_BLUE, TFT_WHITE, TFT_WHITE, gfxFont));

  // Calibration.
  const int buttonCalW = 85;
  gfxItems.Add(GFXItem(int(GFXItemId::Chime_4_up), int(PageId::Calibration), "UP", 40, 110, buttonCalW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime_3_up), int(PageId::Calibration), "UP", 140, 110, buttonCalW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime_2_up), int(PageId::Calibration), "UP", 240, 110, buttonCalW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime_1_up), int(PageId::Calibration), "UP", 340, 110, buttonCalW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime_4_down), int(PageId::Calibration), "DOWN", 40, 170, buttonCalW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime_3_down), int(PageId::Calibration), "DOWN", 140, 170, buttonCalW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime_2_down), int(PageId::Calibration), "DOWN", 240, 170, buttonCalW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime_1_down), int(PageId::Calibration), "DOWN", 340, 170, buttonCalW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));

  // Dev.
  const int buttonDevW = 85;
  gfxItems.Add(GFXItem(int(GFXItemId::Chime4mute), int(PageId::Development), "M4", 40, 110, buttonDevW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime3mute), int(PageId::Development), "M3", 140, 110, buttonDevW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime2mute), int(PageId::Development), "M2", 240, 110, buttonDevW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime1mute), int(PageId::Development), "M1", 340, 110, buttonDevW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime4pick), int(PageId::Development), "P4", 40, 170, buttonDevW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime3pick), int(PageId::Development), "P3", 140, 170, buttonDevW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime2pick), int(PageId::Development), "P2", 240, 170, buttonDevW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));
  gfxItems.Add(GFXItem(int(GFXItemId::Chime1pick), int(PageId::Development), "P1", 340, 170, buttonDevW, 35, TFT_BLACK, TFT_GREEN, TFT_WHITE, TFT_WHITE, gfxFont));

  // Create and add labels.
  gfxItems.Add(GFXItem(int(GFXItemId::PlayState), int(PageId::All), "State", 2, 20, 294, 70, 20, TFT_BLACK, TFT_BLACK, Justification::Center));
  gfxItems.Add(GFXItem(int(GFXItemId::Beat), int(PageId::All), "BEAT", 2, 100, 294, 55, 20, TFT_BLACK, TFT_BLACK, Justification::Center));
  gfxItems.Add(GFXItem(int(GFXItemId::Clock), int(PageId::All), "12:47", 2, 390, 294, 60, 20, TFT_WHITE, TFT_BLACK, Justification::Right));
  gfxItems.Add(GFXItem(int(GFXItemId::SD), int(PageId::All), "SD", 2, 170, 294, 50, 20, TFT_BLACK, TFT_YELLOW, Justification::Center));
  gfxItems.Add(GFXItem(int(GFXItemId::Wifi), int(PageId::All), "WIFI", 2, 245, 294, 50, 20, TFT_BLACK, TFT_YELLOW, Justification::Center));
  gfxItems.Add(GFXItem(int(GFXItemId::Time), int(PageId::All), "TIME", 2, 320, 294, 50, 20, TFT_BLACK, TFT_YELLOW, Justification::Center));
  gfxItems.Add(GFXItem(int(GFXItemId::SongTitle), int(PageId::Home), "Song Title 2", 3, 25, 72, 420, 35, TFT_GREEN, TFT_BLACK, Justification::Center));
  gfxItems.Add(GFXItem(int(GFXItemId::SongLength), int(PageId::Home), "Length", 2, 175, 160, 120, 25, TFT_GREEN, TFT_BLACK, Justification::Center));
  gfxItems.Add(GFXItem(int(GFXItemId::SongNumber), int(PageId::Home), "Count", 2, 175, 185, 120, 25, TFT_GREEN, TFT_BLACK, Justification::Center));
  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Configuration), "Hourly", 2, 20, 70, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));
  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Configuration), "Start Hour", 2, 180, 70, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));
  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Configuration), "End Hour", 2, 340, 70, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));
  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Configuration), "Time Zone", 2, 20, 140, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));
  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Configuration), "On Startup", 2, 180, 140, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));
  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Configuration), "Song", 2, 20, 210, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));

  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Calibration), "4", 2, 70, 90, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));
  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Calibration), "3", 2, 170, 90, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));
  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Calibration), "2", 2, 270, 90, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));
  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Calibration), "1", 2, 370, 90, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));

  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Development), "4", 2, 70, 90, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));
  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Development), "3", 2, 170, 90, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));
  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Development), "2", 2, 270, 90, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));
  gfxItems.Add(GFXItem(int(GFXItemId::Default), int(PageId::Development), "1", 2, 370, 90, 0, 0, TFT_WHITE, TFT_BLACK, Justification::Left));
}

void DisplayFatalError(int error)
{
  tft.fillScreen(TFT_BLACK);
  tft.setTextFont(GLCD);
  tft.setTextColor(TFT_RED);
  tft.setTextSize(3);

  tft.drawString("Error: ", 50, 50);
  if (error == 1)
  {
    tft.drawString("SD card not detected!", 50, 100);
  }

  // TODO: tell chimes to halt activity.
  while (1)
    ;
}

void DisplayClearPartial()
{
  tft.fillRect(5, 60, 470, 225, TFT_BLACK);
}

void DisplayMain()
{
  tft.fillScreen(TFT_BLACK);

  // Perimeter.
  int w = tft.width() - 1;
  int h = tft.height() - 1;
  int t = 3;
  tft.fillRect(0, 0, w, t, TFT_BLUE);
  tft.fillRect(w - t, 0, w, h, TFT_BLUE);
  tft.fillRect(0, h - t, tft.width(), t, TFT_BLUE);
  tft.fillRect(0, 0, 0 + t, h, TFT_BLUE);

  // Cross lines.
  tft.fillRect(0, 50, tft.width(), t, TFT_BLUE);
  tft.fillRect(0, 285, tft.width(), t, TFT_BLUE);

  gfxItems.DisplayGroup(int(PageId::All));
}

void ScreenInit()
{
  tft.init();
  delay(150); // TFT driver needs time to process command.
  tft.setRotation(3);
  delay(150); // TFT driver needs time to process command.

  uint16_t calibrationData[5] = {298, 3574, 266, 3542, 1};
  // Below line calls calibration routine.
  /*   
  tft.fillScreen(TFT_BLACK);
  tft.setTextFont(GLCD);
  tft.setTextColor(TFT_GREEN);
  tft.setTextSize(2);
  tft.drawString("Calibrate display's touch sensor: ", 25, 50);
  tft.drawString("touch each of the four corners in order. ", 25, 75);
  tft.calibrateTouch(calibrationData, TFT_WHITE, TFT_RED, 20);
  for(int i = 0; i < 5; i ++)
  {
    Serial.println(calibrationData[i]);
  }
  // TODO: give user indication calibration is complete.
  while(true);
  */

  tft.setTouch(calibrationData);
}
