const char colBg[] = "#000000";
const char colFg[] = "#eeeeee";

static const char *colors[SchemeLast][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { colFg,     colBg },
	[SchemeSel]  = { colBg,     colFg },
	[SchemeOut]  = { "#000000", "#00ffff" },
};
