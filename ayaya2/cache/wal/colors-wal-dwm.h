static const char norm_fg[] = "#e9e1e9";
static const char norm_bg[] = "#161415";
static const char norm_border[] = "#a39da3";

static const char sel_fg[] = "#e9e1e9";
static const char sel_bg[] = "#A193AA";
static const char sel_border[] = "#e9e1e9";

static const char urg_fg[] = "#e9e1e9";
static const char urg_bg[] = "#718DB1";
static const char urg_border[] = "#718DB1";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
