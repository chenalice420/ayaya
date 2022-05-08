const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1a1315", /* black   */
  [1] = "#966B9C", /* red     */
  [2] = "#E16C99", /* green   */
  [3] = "#748F81", /* yellow  */
  [4] = "#AA949B", /* blue    */
  [5] = "#D3AC9F", /* magenta */
  [6] = "#EFD5AB", /* cyan    */
  [7] = "#dfcee4", /* white   */

  /* 8 bright colors */
  [8]  = "#9c909f",  /* black   */
  [9]  = "#966B9C",  /* red     */
  [10] = "#E16C99", /* green   */
  [11] = "#748F81", /* yellow  */
  [12] = "#AA949B", /* blue    */
  [13] = "#D3AC9F", /* magenta */
  [14] = "#EFD5AB", /* cyan    */
  [15] = "#dfcee4", /* white   */

  /* special colors */
  [256] = "#1a1315", /* background */
  [257] = "#dfcee4", /* foreground */
  [258] = "#dfcee4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
