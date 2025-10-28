static const char col_border[] = "#ffddbb";
static const char col_border_sel[] = "#ffaa33";
static const char col_base[] = "#fefcfa";
static const char col_base_sel[] = "#f9ac3b";
static const char col_front[] = "#14070b";

static const char *colors[][3] = {
    /*               fg         bg            border         */
    [SchemeNorm] = { col_front, col_base,     col_border     },
    [SchemeSel]  = { col_base,  col_base_sel, col_border_sel },
};
