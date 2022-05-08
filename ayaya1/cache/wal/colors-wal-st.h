const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#261516", /* black   */
  [1] = "#E6D8AF", /* red     */
  [2] = "#F6D2B8", /* green   */
  [3] = "#B3B7D4", /* yellow  */
  [4] = "#CBBCD6", /* blue    */
  [5] = "#D4D1DD", /* magenta */
  [6] = "#F5D7CA", /* cyan    */
  [7] = "#f6efdf", /* white   */

  /* 8 bright colors */
  [8]  = "#aca79c",  /* black   */
  [9]  = "#E6D8AF",  /* red     */
  [10] = "#F6D2B8", /* green   */
  [11] = "#B3B7D4", /* yellow  */
  [12] = "#CBBCD6", /* blue    */
  [13] = "#D4D1DD", /* magenta */
  [14] = "#F5D7CA", /* cyan    */
  [15] = "#f6efdf", /* white   */

  /* special colors */
  [256] = "#261516", /* background */
  [257] = "#f6efdf", /* foreground */
  [258] = "#f6efdf",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
