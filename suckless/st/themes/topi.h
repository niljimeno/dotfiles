/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
        "#0b1608",
        "#7c5536",
        "#2e6a4e",
        "#51674e",
        "#589866",
        "#60c070",
        "#bdc063",
        "#bbead1",

        "#769187",
        "#c07556",
        "#2e6a4e",
        "#51674e",
        "#478957",
        "#589866",
        "#9da063",
        "#aad0c1",

        [255] = 0,

        /* more colors can be added after 255 to use with DefaultXX */
        "#99ccbb",
        "#99ccbb",
        "#ccf0e9", /* default foreground colour */
        // "#aaddcc", /* default foreground colour */
        "#000000",// "#020501", /* default background colour */
        // "#040a02", /* default background colour */
};

unsigned int defaultbg = 259;
unsigned int defaultfg = 258;
unsigned int defaultcs = 258;
unsigned int defaultrcs= 258;
