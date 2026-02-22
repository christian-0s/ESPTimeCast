#ifndef MONTHS_LOOKUP_H
#define MONTHS_LOOKUP_H

#include <string.h>
#include <pgmspace.h>

typedef struct {
    const char* lang;
    const char* months[12]; // Jan to Dec
} MonthsMapping;

const MonthsMapping months_mappings[] PROGMEM = {
    { "af", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&e&i", "j&u&n", "j&u&l", "a&u&g", "s&e&p", "o&k&t", "n&o&v", "d&e&s" } }, // Afrikaans
    { "cs", { "l&e&d", "u&n&o", "b&r&e", "d&u&b", "k&v&e", "c&e&r", "c&v&c", "s&r&p", "z&a&r", "r&i&j", "l&i&s", "p&r&o" } }, // Czech
    { "da", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&j", "j&u&n", "j&u&l", "a&u&g", "s&e&p", "o&k&t", "n&o&v", "d&e&c" } }, // Danish
    { "de", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&i", "j&u&n", "j&u&l", "a&u&g", "s&e&p", "o&k&t", "n&o&v", "d&e&z" } }, // German
    { "en", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&y", "j&u&n", "j&u&l", "a&u&g", "s&e&p", "o&c&t", "n&o&v", "d&e&c" } }, // English
    { "eo", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&j", "j&u&n", "j&u&l", "a&u&g", "s&e&p", "o&k&t", "n&o&v", "d&e&c" } }, // Esperanto
    { "es", { "e&n&e", "f&e&b", "m&a&r", "a&b&r", "m&a&y", "j&u&n", "j&u&l", "a&g&o", "s&e&p", "o&c&t", "n&o&v", "d&i&c" } }, // Spanish
    { "et", { "j&a&n", "v&e&b", "m&a&r", "a&p&r", "m&a&i", "j&u&n", "j&u&l", "a&u&g", "s&e&p", "o&k&t", "n&o&v", "d&e&t" } }, // Estonian
    { "fi", { "t&a&m", "h&e&l", "m&a&a", "h&u&h", "t&o&u", "k&e&s", "h&e&i", "e&l&o", "s&y&y", "l&o&k", "m&a&r", "j&o&u" } }, // Finnish
    { "fr", { "j&a&n", "f&e&v", "m&a&r", "a&v&r", "m&a&i", "j&u&n", "j&u&l", "a&o&u", "s&e&p", "o&c&t", "n&o&v", "d&e&c" } }, // French
    { "hr", { "s&i&j", "v&e&l", "o&z&u", "t&r&a", "s&v&i", "l&i&p", "s&r&p", "k&o&l", "r&u&j", "l&i&s", "s&t&u", "p&r&o" } }, // Croatian
    { "hu", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&j", "j&u&n", "j&u&l", "a&u&g", "s&z&e", "o&k&t", "n&o&v", "d&e&c" } }, // Hungarian
    { "it", { "g&e&n", "f&e&b", "m&a&r", "a&p&r", "m&a&g", "g&i&u", "l&u&g", "a&g&o", "s&e&t", "o&t&t", "n&o&v", "d&i&c" } }, // Italian
    { "ga", { "e&a&n", "f&e&a", "m&a&r", "a&i&b", "b&e&a", "m&e&i", "i&u&i", "l&u&n", "m&e&a", "d&e&i", "s&a&m", "n&o&l" } }, // Irish
    { "ja", { "1 ²", "2 ²", "3 ²", "4 ²", "5 ²", "6 ²", "7 ²", "8 ²", "9 ²", "10 ²", "11 ²", "12 ²" } }, // Japanese
    { "lt", { "s&a&u", "v&a&s", "k&o&v", "b&a&l", "g&e&g", "b&i&r", "l&i&e", "r&u&g", "s&w&e", "s&p&a", "l&a&p", "g&r&u" } }, // Lithuanian
    { "lv", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&i", "j&u&n", "j&u&l", "a&u&g", "s&e&p", "o&k&t", "n&o&v", "d&e&c" } }, // Latvian
    { "nl", { "j&a&n", "f&e&b", "m&a&a", "a&p&r", "m&e&i", "j&u&n", "j&u&l", "a&u&g", "s&e&p", "o&k&t", "n&o&v", "d&e&c" } }, // Dutch
    { "no", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&i", "j&u&n", "j&u&l", "a&u&g", "s&e&p", "o&k&t", "n&o&v", "d&e&s" } }, // Norwegian
    { "pl", { "s&t&y", "l&u&t", "m&a&r", "k&w&i", "m&a&j", "c&z&e", "l&i&p", "s&i&e", "w&r&z", "p&a&z", "l&i&s", "g&r&u" } }, // Polish
    { "pt", { "j&a&n", "f&e&v", "m&a&r", "a&b&r", "m&a&i", "j&u&n", "j&u&l", "a&g&o", "s&e&t", "o&u&t", "n&o&v", "d&e&z" } }, // Portuguese
    { "ro", { "i&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&i", "i&u&n", "i&u&l", "a&u&g", "s&e&p", "o&c&t", "n&o&v", "d&e&c" } }, // Romanian
    { "ru", { "i&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&i", "i&u&n", "i&u&l", "a&u&g", "s&e&p", "o&c&t", "n&o&i", "d&e&c" } }, // Russian
    { "sk", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&j", "j&u&n", "j&u&l", "a&u&g", "s&e&p", "o&k&t", "n&o&v", "d&e&c" } }, // Slovak
    { "sl", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&j", "j&u&n", "j&u&l", "a&v&g", "s&e&p", "o&k&t", "n&o&v", "d&e&c" } }, // Slovenian
    { "sr", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&j", "j&u&n", "j&u&l", "a&v&g", "s&e&p", "o&k&t", "n&o&v", "d&e&c" } }, // Serbian
    { "sv", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&a&j", "j&u&n", "j&u&l", "a&u&g", "s&e&p", "o&k&t", "n&o&v", "d&e&c" } }, // Swedish
    { "sw", { "j&a&n", "f&e&b", "m&a&r", "a&p&r", "m&e&i", "j&u&n", "j&u&l", "a&g&o", "s&e&p", "o&k&t", "n&o&v", "d&e&s" } }, // Swahili
    { "tr", { "o&c&a", "s&u&b", "m&a&r", "n&i&s", "m&a&y", "h&a&z", "t&e&m", "a&g&u", "e&y&l", "e&k&i", "k&a&s", "a&r&a" } }  // Turkish
};

#define MONTHS_MAPPINGS_COUNT (sizeof(months_mappings)/sizeof(months_mappings[0]))

// Copies localized month string into buf for given language and month index (0-11). Uses PROGMEM.
inline bool getMonthDisplay(const char* lang, int monthIndex, char* buf, size_t bufSize) {
    if (monthIndex < 0 || monthIndex >= 12 || !buf || bufSize == 0) return false;
    PGM_P pStr = nullptr;
    for (size_t i = 0; i < MONTHS_MAPPINGS_COUNT; i++) {
        PGM_P pLang = (PGM_P)pgm_read_ptr(&months_mappings[i].lang);
        if (strcmp_P(lang, pLang) == 0) {
            pStr = (PGM_P)pgm_read_ptr(&months_mappings[i].months[monthIndex]);
            break;
        }
    }
    if (!pStr) {
        pStr = (PGM_P)pgm_read_ptr(&months_mappings[4].months[monthIndex]); // "en" fallback
    }
    if (pStr) {
        strncpy_P(buf, pStr, bufSize - 1);
        buf[bufSize - 1] = '\0';
        return true;
    }
    return false;
}

#endif // MONTHS_LOOKUP_H