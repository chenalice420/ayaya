static const char norm_fg[] = "#dfcee4";
static const char norm_bg[] = "#1a1315";
static const char norm_border[] = "#9c909f";

static const char sel_fg[] = "#dfcee4";
static const char sel_bg[] = "#E16C99";
static const char sel_border[] = "#dfcee4";

static const char urg_fg[] = "#dfcee4";
static const char urg_bg[] = "#966B9C";
static const char urg_border[] = "#966B9C";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
