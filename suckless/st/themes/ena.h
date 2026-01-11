const char *colorname[] = {
  /* 8 normal colors */
  [0] = "#0a090d", /* black   */
  [1] = "#67545D", /* red     */
  [2] = "#D60E17", /* green   */
  [3] = "#993E4F", /* yellow  */
  [4] = "#898D75", /* blue    */
  [5] = "#9F7587", /* magenta */
  [6] = "#78B1B7", /* cyan    */
  [7] = "#cdd3d2", /* white   */

  /* 8 bright colors */
  [8]  = "#8f9393",  /* black   */
  [9]  = "#67545D",  /* red     */
  [10] = "#D60E17", /* green   */
  [11] = "#993E4F", /* yellow  */
  [12] = "#898D75", /* blue    */
  [13] = "#9F7587", /* magenta */
  [14] = "#78B1B7", /* cyan    */
  [15] = "#cdd3d2", /* white   */

  /* special colors */
  [256] = "#0a090d", /* background */
  [257] = "#cdd3d2", /* foreground */
  [258] = "#cdd3d2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
