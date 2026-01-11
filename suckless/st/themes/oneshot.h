const char *colorname[] = {
  /* 8 normal colors */
  // [0] = "#10000f", /* black   */
  [0] = "#080505", /* black   */
  [1] = "#632711", /* red     */
  // [2] = "#884c18", /* green   */
  [2] = "#888c18", /* green   */

  [3] = "#af6f1e", /* yellow  */
  [4] = "#d39825", /* blue    */
  [5] = "#dfb54c", /* magenta */
  [6] = "#e4c865", /* cyan    */
  [7] = "#f6e8a3", /* white   */

  /* 8 bright colors */
  [8]  = "#aca272",  /* black   */
  [9]  = "#632711",  /* red     */
  // [10] = "#884c18", /* green   */
  [10] = "#888c18", /* green   */

  [11] = "#af6f1e", /* yellow  */
  [12] = "#d39825", /* blue    */
  [13] = "#dfb54c", /* magenta */
  [14] = "#e4c865", /* cyan    */
  [15] = "#f6e8a3", /* white   */

  /* special colors */
  [256] = "#10000f", /* background */
  [257] = "#f6e8a3", /* foreground */
  [258] = "#f6e8a3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
