static const char norm_fg[] = "#f6e8a3";
static const char norm_bg[] = "#10000f";
static const char norm_border[] = "#aca272";

static const char sel_fg[] = "#f6e8a3";
static const char sel_bg[] = "#884c18";
static const char sel_border[] = "#f6e8a3";

static const char urg_fg[] = "#f6e8a3";
static const char urg_bg[] = "#632711";
static const char urg_border[] = "#632711";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
