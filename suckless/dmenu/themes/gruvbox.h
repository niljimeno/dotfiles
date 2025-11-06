const char colBg[] = "#3c3836";
const char colFg[] = "#ebdbb2";

static const char *colors[SchemeLast][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { colFg,     colBg },
	[SchemeSel]  = { colBg,     colFg },
	[SchemeOut]  = { "#000000", "#00ffff" },
};
