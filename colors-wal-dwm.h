static const char norm_fg[] = "#b1cbbb";
static const char norm_bg[] = "#252524";
static const char norm_border[] = "#7b8e82";

static const char sel_fg[] = "#b1cbbb";
static const char sel_bg[] = "#BF5D47";
static const char sel_border[] = "#b1cbbb";

static const char urg_fg[] = "#b1cbbb";
static const char urg_bg[] = "#646D56";
static const char urg_border[] = "#646D56";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },    	    	
    [SchemeStatus]  = { norm_fg, norm_bg,  "#000000"  }, // Statusbar right {text,background,not used but cannot be empty}
    [SchemeTagsSel]  = { sel_fg, sel_bg,  "#000000"  }, // Tagbar left selected {text,background,not used but cannot be empty}
    [SchemeTagsNorm]  = { norm_fg, norm_bg,  "#000000"  }, // Tagbar left unselected {text,background,not used but cannot be empty}
    [SchemeInfoSel]  = { sel_fg, sel_bg,  "#000000"  }, // infobar middle  selected {text,background,not used but cannot be empty}
    [SchemeInfoNorm]  = { norm_fg, norm_bg,  "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty}
};
