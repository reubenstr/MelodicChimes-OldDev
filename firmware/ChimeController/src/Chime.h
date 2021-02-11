#include "Arduino.h"
#include <AccelStepper.h>
#include <Audio.h>
#include "movingAvg.h"

/*
    Pick Stepper:
    200 steps/rev, 1/2 steps, 20:30 pulley (20 teeth on drive, 30 teeth on pick), 8 plectrum/rev
    = 75 steps per pick
*/

class Chime
{

public:
    Chime(int chimeId, AudioAnalyzeNoteFrequency &notefreq, uint8_t pinMotorTunePhase, uint8_t pinMotorTuneEnable, uint8_t pinMotorPickPhase, uint8_t pinMotorPickEnable, uint8_t pinMotorPickLimit, uint8_t pinSolenoidMute);

    float NoteIdToFrequency(float noteId);

    void SetTargetFrequency(float frequency);

    void PrepareCalibrateStepsToNotes();
    bool CalibrateStepsToNotes(float detectedFrequency);

    void CalibrateFrequencyPerStep();

    bool CalibratePick();

    void ReString(bool direction);

    void Pick();
    void Mute();
    void Tick();

    unsigned long temp;
    int setTime;

private:
    bool TuneNote(float detectedFrequency, int noteId);
    bool TuneFrequency(float targetFrequency);

    float GetFrequency();
    void SetStepperParameters();
    void MuteTick();

    // Tuning.
    AudioAnalyzeNoteFrequency *notefreq;
    float _targetFrequency;
    float _detectedFrequency;

    // Positions.
    const int _stepsPerRestringCommand = 800;
    const int _stepsPerPick = 75;
    const int _stepsPerMute = 50;

    // Mute.
    bool _muteReturnToOpenFlag;

    int _chimeId;
    int stepsToNotes[80];

    // Cailbration.
    unsigned long frequencyDetectionTimeoutMillis = millis();
    const int frequencyDetectionTimeoutMs = 1000;
    int noteId;
    int betweenNotesMillis;

    int _lowestNote = 60;
    int _highestNote = 69;

    AccelStepper _tuneStepper;
    AccelStepper _pickStepper;
    AccelStepper _muteStepper;

    uint8_t _pinMotorPickLimit;
    const int _motorPickIndexActivated = 1;

    uint8_t _pinSolenoidMute;

    unsigned long _startPick;
    unsigned long _startMute;

    // Tuning variables.
    enum TuneStates
    {
        StepTune,
        FreeTune,
        WaitForStepTune,
    };
    TuneStates _tuneState = FreeTune;
    int _currentNoteId = 0;

    // FrequenctPerStep.
    enum FreqPerStepStates
    {
        Home,
        Move,
        WaitForMove,
        WaitForReading
    };
    FreqPerStepStates _freqPerStepState = FreqPerStepStates::Home;
    int _readingsCount;
    int _totalReadingsCount;
    const int _numReadingsToAverage = 5;
    const int _stepsBetweenReadings = 20;
    movingAvg _freqAverage = movingAvg(_numReadingsToAverage);
    float frequencyReadings[200];
};