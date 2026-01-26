#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
// Additional Note Definitions
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_CS5 554 // C-Sharp 5
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_FS5 740 // F-Sharp 5

// --- Music Struct ---
typedef struct {
    uint32_t frequency;
    uint32_t duration_ms;
} Tone_t;
