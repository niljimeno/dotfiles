const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#100100", /* black   */
  [1] = "#A45822", /* red     */
  [2] = "#997154", /* green   */
  [3] = "#DD842C", /* yellow  */
  [4] = "#B28C6D", /* blue    */
  [5] = "#CD986F", /* magenta */
  [6] = "#BC9F86", /* cyan    */
  [7] = "#e3cfbe", /* white   */

  /* 8 bright colors */
  [8]  = "#9e9085",  /* black   */
  [9]  = "#A45822",  /* red     */
  [10] = "#997154", /* green   */
  [11] = "#DD842C", /* yellow  */
  [12] = "#B28C6D", /* blue    */
  [13] = "#CD986F", /* magenta */
  [14] = "#BC9F86", /* cyan    */
  [15] = "#e3cfbe", /* white   */

  /* special colors */
  [256] = "#100100", /* background */
  [257] = "#e3cfbe", /* foreground */
  [258] = "#e3cfbe",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;

