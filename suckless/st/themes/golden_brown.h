const char *colorname[] = {
  /* 8 normal colors */
  [0] = "#242218", /* black   */
  [1] = "#7C8475", /* red     */
  [2] = "#928A6F", /* green   */
  [3] = "#A7926D", /* yellow  */
  [4] = "#BB9B68", /* blue    */
  [5] = "#A3A38E", /* magenta */
  [6] = "#C7B692", /* cyan    */
  [7] = "#e1dcca", /* white   */

  /* 8 bright colors */
  [8]  = "#9d9a8d",  /* black   */
  [9]  = "#7C8475",  /* red     */
  [10] = "#928A6F", /* green   */
  [11] = "#A7926D", /* yellow  */
  [12] = "#BB9B68", /* blue    */
  [13] = "#A3A38E", /* magenta */
  [14] = "#C7B692", /* cyan    */
  [15] = "#e1dcca", /* white   */

  /* special colors */
  [256] = "#242218", /* background */
  [257] = "#e1dcca", /* foreground */
  [258] = "#e1dcca",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
