static const char col_border[] = "#32302f";
static const char col_border_sel[] = "#7c6f64";
static const char col_base[] = "#3c3836";
static const char col_front[] = "#ebdbb2";

static const char *colors[][3] = {
	/*               fg     bg      border     */
	[SchemeNorm] = { col_front, col_base,   col_border      },
	[SchemeSel]  = { col_base,  col_front,  col_border_sel  },
};
