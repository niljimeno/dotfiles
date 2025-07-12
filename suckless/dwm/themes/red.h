static const char col_gray1[] = "#222222";
static const char col_gray2[] = "#444444";
static const char col_gray3[] = "#bbbbbb";
static const char col_gray4[] = "#eeeeee";

static const char col_sky[]  = "#663300";
static const char col_star[]  = "#990000";

static const char *colors[][3] = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, col_gray1, col_sky },
	[SchemeSel]  = { col_gray4, col_star,  col_star  },
};
