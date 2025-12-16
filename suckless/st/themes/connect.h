const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#080505", /* black   */
  [1] = "#cd697a", /* red     */
  [2] = "#c67c54", /* green   */
  [3] = "#cb6478", /* yellow  */
  [4] = "#d1758b", /* blue    */
  [5] = "#d2ae78", /* magenta */
  [6] = "#d68d85", /* cyan    */
  [7] = "#d9d0c0", /* white   */

  /* 8 bright colors */
  [8]  = "#979186",  /* black   */
  [9]  = "#cd697a",  /* red     */
  [10] = "#c67c54", /* green   */
  [11] = "#cb6478", /* yellow  */
  [12] = "#d1758b", /* blue    */
  [13] = "#d2ae78", /* magenta */
  [14] = "#d68d85", /* cyan    */
  [15] = "#d9d0c0", /* white   */

  /* special colors */
  [256] = "#080505", /* background */
  [257] = "#d9d0c0", /* foreground */
  [258] = "#d9d0c0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
