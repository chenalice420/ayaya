const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#161415", /* black   */
  [1] = "#718DB1", /* red     */
  [2] = "#A193AA", /* green   */
  [3] = "#D59FAA", /* yellow  */
  [4] = "#A5ACCE", /* blue    */
  [5] = "#E0AFD5", /* magenta */
  [6] = "#C9D0D0", /* cyan    */
  [7] = "#e9e1e9", /* white   */

  /* 8 bright colors */
  [8]  = "#a39da3",  /* black   */
  [9]  = "#718DB1",  /* red     */
  [10] = "#A193AA", /* green   */
  [11] = "#D59FAA", /* yellow  */
  [12] = "#A5ACCE", /* blue    */
  [13] = "#E0AFD5", /* magenta */
  [14] = "#C9D0D0", /* cyan    */
  [15] = "#e9e1e9", /* white   */

  /* special colors */
  [256] = "#161415", /* background */
  [257] = "#e9e1e9", /* foreground */
  [258] = "#e9e1e9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
