// /* Terminal colors (16 first used in escape sequence) */
// static const char *colorname[] = {
//     "#cc241d",
//     "#98971a",
//     "#d79921",
//     "#75a5a8",
//     "#b16286",
//     "#689d6a",
//     "#d65d0e",
//     "#d5c4a1",
//
//     "#fb4934",
//     "#b8bb26",
//     "#fabd2f",
//     "#a3c5b8",
//     "#d3869b",
//     "#8ec07c",
//     "#fe8019",
//     "#fbf1c7",
//
//
//     [255] = 0,
//
//     /* more colors can be added after 255 to use with DefaultXX */
//     "#ebdbb2",
//     "#ebdbb2",
//     "#ebdbb2", /* default foreground colour */
//     // "#131313", /* default background colour */
//     "#282828", /* default background colour */
//     // "#332d31", /* default background colour */
//     // "#282624", /* default background colour */
// };

 /* Terminal colors (16 first used in escape sequence) */
 static const char *colorname[] = {
  /* 8 normal colors */
  [0] = "#1d2021", // "282828", /* hard contrast: #1d2021 / soft contrast: #32302f */
  [1] = "#cc241d", /* red     */
  [2] = "#98971a", /* green   */
  [3] = "#d79921", /* yellow  */
  [4] = "#458588", /* blue    */
  [5] = "#b16286", /* magenta */
  [6] = "#689d6a", /* cyan    */
  [7] = "#a89984", /* white   */

  /* 8 bright colors */
  [8]  = "#928374", /* black   */
  [9]  = "#fb4934", /* red     */
  [10] = "#b8bb26", /* green   */
  [11] = "#fabd2f", /* yellow  */
  [12] = "#83a598", /* blue    */
  [13] = "#d3869b", /* magenta */
  [14] = "#8ec07c", /* cyan    */
  [15] = "#ebdbb2", /* white   */

  [256] = "#080505", /* background */
};

unsigned int defaultfg = 15;
unsigned int defaultbg = 256;
unsigned int defaultcs = 15;
unsigned int defaultrcs = 257;
