static const char norm_fg[] = "#c8cedf";
static const char norm_bg[] = "#13151b";
static const char norm_border[] = "#8c909c";

static const char sel_fg[] = "#c8cedf";
static const char sel_bg[] = "#9D6A8F";
static const char sel_border[] = "#c8cedf";

static const char urg_fg[] = "#c8cedf";
static const char urg_bg[] = "#5D6494";
static const char urg_border[] = "#5D6494";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
