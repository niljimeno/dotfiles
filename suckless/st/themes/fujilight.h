/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
        "#fefcfa",
        "#ee5838",
        "#d64f52",
        "#f68027", //#fa902a //"#f9ac3b"
        "#c16f8e",
        "#eca6b1",
        "#f0c0ab", //#fbe0b4
        "#14070b",

        "#978e85",
        "#ee5838",
        "#d64f52",
        "#f9ac3b",
        "#c16f8e",
        "#eca6b1",
        "#fbe0b4",
        "#14070b",

        [255] = 0,

        /* more colors can be added after 255 to use with DefaultXX */
        "#14070b",
        "#14070b",
        "#14070b", /* default foreground colour */
        "#fefcfa", /* default background colour */
};
