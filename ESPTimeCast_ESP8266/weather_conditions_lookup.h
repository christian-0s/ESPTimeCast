#ifndef WEATHER_CONDITIONS_LOOKUP_H
#define WEATHER_CONDITIONS_LOOKUP_H

#include <string.h>
#include <pgmspace.h>

// Weather condition indices (matches HA/OWM condition mapping)
#define WX_SUNNY           0
#define WX_CLEAR           1
#define WX_CLOUDY          2
#define WX_PARTLY_CLOUDY   3
#define WX_RAINY           4
#define WX_HEAVY_RAIN      5
#define WX_SNOWY           6
#define WX_SNOW_AND_RAIN   7
#define WX_FOGGY           8
#define WX_THUNDERSTORM    9
#define WX_HAIL            10
#define WX_WINDY           11
#define WX_EXCEPTIONAL     12
#define WX_COUNT           13

typedef struct {
    const char* lang;
    const char* conditions[WX_COUNT];
} WeatherConditionsMapping;

// Index 4 = "en" in both days and months lookup
const WeatherConditionsMapping weather_conditions_mappings[] PROGMEM = {
    { "af", { "sonnig", "helder", "bewolk", "deels bewolk", "reën", "swaar reën", "sneeu", "sneeu en reën", "mis", "donderstorm", "hael", "windagtig", "buitengewoon" } },
    { "cs", { "slunečno", "jasno", "oblačno", "částečně oblačno", "déšť", "silný déšť", "sníh", "sníh a déšť", "mlha", "bouřka", "kroupy", "větrno", "výjimečné" } },
    { "da", { "solskin", "klart", "overskyet", "delvist skyet", "regn", "kraftig regn", "sne", "sne og regn", "tåge", "tordenvejr", "hagl", "blæsende", "ekstraordinært" } },
    { "de", { "sonnig", "klar", "bewölkt", "teilweise bewölkt", "regnerisch", "starkes Regen", "schnee", "Schnee und Regen", "neblig", "Gewitter", "Hagel", "windig", "außergewöhnlich" } },
    { "en", { "sunny", "clear", "cloudy", "partly cloudy", "rainy", "heavy rain", "snowy", "snow and rain", "foggy", "thunderstorm", "hail", "windy", "exceptional" } },
    { "eo", { "suna", "serena", "nuba", "parte nuba", "pluva", "forta pluvo", "neĝa", "neĝo kaj pluvo", "nebula", "fulmotondro", "hajlo", "venta", "escepta" } },
    { "es", { "soleado", "despejado", "nublado", "parcialmente nublado", "lluvioso", "lluvia fuerte", "nevado", "nieve y lluvia", "neblinoso", "tormenta", "granizo", "ventoso", "excepcional" } },
    { "et", { "päikeseline", "selge", "pilvine", "osaliselt pilvine", "vihmane", "tugev vihm", "lumine", "lumi ja vihm", "udune", "äike", "rahe", "tuuline", "erakordne" } },
    { "fi", { "aurinkoinen", "selkeä", "pilvinen", "puolipilvinen", "sateinen", "rankka sade", "luminen", "lunta ja sadetta", "sumuinen", "ukkonen", "rakeet", "tuulinen", "poikkeuksellinen" } },
    { "fr", { "ensoleillé", "dégagé", "nuageux", "partiellement nuageux", "pluvieux", "forte pluie", "neigeux", "neige et pluie", "brumeux", "orage", "grêle", "venteux", "exceptionnel" } },
    { "ga", { "grianmhar", "glan", "scamallach", "scamallach go páirteach", "fearthainneach", "báisteach throm", "sneachtúil", "sneachta agus báisteach", "ceo", "stoirm thintrí", "cloich shneachta", "gaofar", "eisceachtúil" } },
    { "hr", { "sunčano", "vedro", "oblačno", "djelomično oblačno", "kišovito", "jaka kiša", "snježno", "snijeg i kiša", "maglovito", "grmljavina", "tuča", "vjetrovito", "iznimno" } },
    { "hu", { "napos", "tiszta", "felhős", "részben felhős", "esős", "erős eső", "havas", "hó és eső", "ködös", "zivatar", "jégeső", "szeles", "kivételes" } },
    { "it", { "soleggiato", "sereno", "nuvoloso", "parzialmente nuvoloso", "piovoso", "forte pioggia", "nevicata", "neve e pioggia", "nebbioso", "temporale", "grandine", "ventoso", "eccezionale" } },
    { "ja", { "晴れ", "快晴", "曇り", "時々曇り", "雨", "大雨", "雪", "みぞれ", "霧", "雷", "あられ", "風強し", "異常" } },
    { "lt", { "saulėta", "giedra", "debesuota", "dalinai debesuota", "lietinga", "stiprus lietus", "snieguota", "sniegas ir lietus", "rūkas", "audra", "kruša", "vėjuota", "išskirtinė" } },
    { "lv", { "saulains", "dzidrs", "mākoņains", "daļēji mākoņains", "lietoš", "stiprs lietus", "sniegains", "sniegs un lietus", "migains", "pērkona vētra", "krusa", "vējains", "izņēmuma" } },
    { "nl", { "zonnig", "helder", "bewolkt", "gedeeltelijk bewolkt", "regenachtig", "zware regen", "sneeuwachtig", "sneeuw en regen", "mistig", "onweer", "hagel", "winderig", "uitzonderlijk" } },
    { "no", { "solrik", "klart", "skyet", "delvis skyet", "regn", "kraftig regn", "snø", "snø og regn", "tåke", "tordenvær", "hagl", "vindfullt", "ekstraordinært" } },
    { "pl", { "słonecznie", "bezchmurnie", "pochmurno", "częściowo pochmurno", "deszczowo", "ulewa", "śnieżnie", "śnieg i deszcz", "mgła", "burza", "grad", "wietrznie", "wyjątkowe" } },
    { "pt", { "ensolarado", "limpo", "nublado", "parcialmente nublado", "chuvoso", "chuva forte", "nevando", "neve e chuva", "neblina", "tempestade", "granizo", "ventoso", "excecional" } },
    { "ro", { "însorit", "senin", "înnorat", "parțial noros", "ploios", "ploaie puternică", "zăpadă", "zăpadă și ploaie", "cețos", "furtună", "grindină", "vant", "excepțional" } },
    { "ru", { "солнечно", "ясно", "облачно", "переменная облачность", "дождь", "ливень", "снег", "снег с дождём", "туман", "гроза", "град", "ветрено", "исключительно" } },
    { "sk", { "slnečno", "jasno", "oblačno", "čiastočne oblačno", "dážď", "silný dážď", "sneženie", "sneh a dážď", "hmla", "búrka", "krúpy", "veterno", "výnimočné" } },
    { "sl", { "sončno", "jasno", "oblačno", "delno oblačno", "deževno", "močan dež", "snežno", "sneg in dež", "megleno", "nevihta", "toča", "vetrovno", "izjemno" } },
    { "sr", { "sunčano", "vedro", "oblačno", "delimično oblačno", "kišovito", "jaka kiša", "snežno", "sneg i kiša", "maglovito", "oluja", "grad", "vetrovito", "izuzetno" } },
    { "sv", { "soligt", "klart", "molnigt", "delvis molnigt", "regnigt", "kraftigt regn", "snöigt", "snö och regn", "dimma", "åskväder", "hagel", "blåsigt", "exceptionellt" } },
    { "sw", { "jua", "wazi", "mawingu", "sehemu mawingu", "mvua", "mvua nzito", "theluji", "theluji na mvua", "ukungu", "radi", "mvua ya mawe", "upepo", "pekee" } },
    { "tr", { "güneşli", "açık", "bulutlu", "parçalı bulutlu", "yağmurlu", "şiddetli yağmur", "karlı", "kar ve yağmur", "sisli", "fırtına", "dolu", "rüzgarlı", "olağanüstü" } }
};

#define WEATHER_CONDITIONS_MAPPINGS_COUNT (sizeof(weather_conditions_mappings) / sizeof(weather_conditions_mappings[0]))

// Maps HA/OWM condition string to index. Returns -1 if unknown.
inline int weatherConditionToIndex(const char* condition) {
    if (!condition || strlen(condition) == 0) return -1;
    // Build lowercase comparison string
    char buf[32];
    size_t i = 0;
    for (; condition[i] && i < sizeof(buf) - 1; i++) {
        char c = condition[i];
        buf[i] = (c >= 'A' && c <= 'Z') ? (c + 32) : c;
    }
    buf[i] = '\0';
    // Remove hyphens for matching
    for (size_t j = 0; buf[j]; j++) {
        if (buf[j] == '-') {
            memmove(&buf[j], &buf[j + 1], strlen(&buf[j + 1]) + 1);
            j--;
        }
    }
    if (strcmp(buf, "sunny") == 0) return WX_SUNNY;
    if (strcmp(buf, "clearnight") == 0) return WX_CLEAR;
    if (strcmp(buf, "cloudy") == 0) return WX_CLOUDY;
    if (strcmp(buf, "partlycloudy") == 0) return WX_PARTLY_CLOUDY;
    if (strcmp(buf, "rainy") == 0) return WX_RAINY;
    if (strcmp(buf, "pouring") == 0) return WX_HEAVY_RAIN;
    if (strcmp(buf, "snowy") == 0) return WX_SNOWY;
    if (strcmp(buf, "snowyrainy") == 0) return WX_SNOW_AND_RAIN;
    if (strcmp(buf, "fog") == 0 || strcmp(buf, "mist") == 0) return WX_FOGGY;
    if (strcmp(buf, "lightning") == 0 || strcmp(buf, "lightningrainy") == 0) return WX_THUNDERSTORM;
    if (strcmp(buf, "hail") == 0) return WX_HAIL;
    if (strcmp(buf, "windy") == 0 || strcmp(buf, "windyvariant") == 0) return WX_WINDY;
    if (strcmp(buf, "exceptional") == 0) return WX_EXCEPTIONAL;
    return -1;
}

// Copies translated condition string into buf for given language and index.
// Returns true if found and copied, false otherwise. Uses strcpy_P for flash reads.
inline bool getWeatherConditionDisplay(const char* lang, int index, char* buf, size_t bufSize) {
    if (index < 0 || index >= WX_COUNT || !buf || bufSize == 0) return false;
    PGM_P pStr = nullptr;
    for (size_t i = 0; i < WEATHER_CONDITIONS_MAPPINGS_COUNT; i++) {
        PGM_P pLang = (PGM_P)pgm_read_ptr(&weather_conditions_mappings[i].lang);
        if (strcmp_P(lang, pLang) == 0) {
            pStr = (PGM_P)pgm_read_ptr(&weather_conditions_mappings[i].conditions[index]);
            break;
        }
    }
    if (!pStr) {
        // Fallback to English (index 4)
        pStr = (PGM_P)pgm_read_ptr(&weather_conditions_mappings[4].conditions[index]);
    }
    if (pStr) {
        strncpy_P(buf, pStr, bufSize - 1);
        buf[bufSize - 1] = '\0';
        return true;
    }
    return false;
}

#endif // WEATHER_CONDITIONS_LOOKUP_H
