static const char norm_fg[] = "#f6efdf";
static const char norm_bg[] = "#261516";
static const char norm_border[] = "#aca79c";

static const char sel_fg[] = "#f6efdf";
static const char sel_bg[] = "#F6D2B8";
static const char sel_border[] = "#f6efdf";

static const char urg_fg[] = "#f6efdf";
static const char urg_bg[] = "#E6D8AF";
static const char urg_border[] = "#E6D8AF";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
