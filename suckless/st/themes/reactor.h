/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
        "#0b1608",
        "#9c5536",
        "#2e8a3e",
        "#51674e",
        "#589866",
        "#60c070",
        "#bdc063",
        "#d1e0d1",

        "#769187",
        "#d09070",
        "#4eb04e",
        "#51674e",
        "#80a080",
        "#589866",
        "#9da063",
        "#f6fff6",

        [255] = 0,

        /* more colors can be added after 255 to use with DefaultXX */
        "#aaccbb",
        "#aaccbb",
        "#ddffdd", /* default foreground colour */
        // "#aaddcc", /* default foreground colour */
        "#020501", /* default background colour */
        // "#040a02", /* default background colour */
};
