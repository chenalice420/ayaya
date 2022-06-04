const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#13151b", /* black   */
  [1] = "#5D6494", /* red     */
  [2] = "#9D6A8F", /* green   */
  [3] = "#738CAD", /* yellow  */
  [4] = "#A19B9D", /* blue    */
  [5] = "#C5B9BD", /* magenta */
  [6] = "#E6D2B1", /* cyan    */
  [7] = "#c8cedf", /* white   */

  /* 8 bright colors */
  [8]  = "#8c909c",  /* black   */
  [9]  = "#5D6494",  /* red     */
  [10] = "#9D6A8F", /* green   */
  [11] = "#738CAD", /* yellow  */
  [12] = "#A19B9D", /* blue    */
  [13] = "#C5B9BD", /* magenta */
  [14] = "#E6D2B1", /* cyan    */
  [15] = "#c8cedf", /* white   */

  /* special colors */
  [256] = "#13151b", /* background */
  [257] = "#c8cedf", /* foreground */
  [258] = "#c8cedf",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
