static const char col_border[] = "#333333";
static const char col_border_sel[] = "#558855";
static const char col_base[] = "#070707";
static const char col_front[] = "#589866";

static const char *colors[][3] = {
	/*               fg     bg      border     */
	[SchemeNorm] = { col_front, col_base,   col_border      },
	[SchemeSel]  = { col_base,  col_front,  col_border_sel  },
};
