static const char norm_fg[] = "#d9d0c0";
static const char norm_bg[] = "#080505";
static const char norm_border[] = "#979186";

static const char sel_fg[] = "#d9d0c0";
static const char sel_bg[] = "#c67c54";
static const char sel_border[] = "#d9d0c0";

static const char urg[] = "#C86F7E";

static const char *colors[][3]      = {
    /*               fg         bg        border        */
	[SchemeNorm] = { norm_fg,   norm_bg,  norm_bg },
	[SchemeSel] =  { norm_bg,   urg,   /*"#cd697a"*/  sel_border },
};
