/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    "#34302C",
    "#BD8183",
    "#78997A",
    "#E49B5D",
    "#7F91B2",
    "#B380B0",
    "#7B9695",
    "#C1A78E",

    "#867462",
    "#D47766",
    "#85B695",
    "#EBC06D",
    "#A3A9CE",
    "#CF9BC2",
    "#89B3B6",
    "#ECE1D7",

    [255] = 0,

    /* more colors can be added after 255 to use with DefaultXX */
    "#ECE1D7",
    "#ECE1D7",
    "#ECE1D7", /* default foreground colour */
    "#292522", /* default background colour */
};
