char *helptext[][2] = {
    {"movement", ""},
    {"========", ""},
    {"k/j", "move up/down a note"},
    {"K/J", "move to the previous/next page"},
    {"", ""},
    {"editing", ""},
    {"=======", ""},
    {"h/H", "lower note one semitone / octave"},
    {"l/L", "raise note one semitone / octave"},
    {"[", "increase duty cycle"},
    {"]", "decrease duty cycle"},
    {"DEL", "clear a note"},
    {".", "paste last changed note"},
    {"x", "toggle kill"},
    {"X", "delete page"},
    {"i", "insert line(s)"},
    {"d", "delete line(s)"},
    {"c", "copy line(s)"},
    {"v", "paste line(s)"},
    {"", ""},
    {"song", ""},
    {"====", ""},
    {"p/P", "play this pattern / whole song"},
    {"-/_", "decrease tempo by one / ten"},
    {"=/+", "increase tempo by one / ten"},
    {"S/D", "save / load song from file"},
    {"W", "export audio to wavfile"},
    {">", "export to badge notefile"},
    {"", ""},
    {"program", ""},
    {"=======", ""},
    {"?", "show help"},
    {"^C^C", "quit"},
    {(void *) 0, (void *) 0},
};
