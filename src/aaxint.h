struct xdriverdata {
  Display *dp;
  Window wi;
  Pixmap pi;
  XSetWindowAttributes attr;
  int fontheight;
  int fontwidth;
  int realfontwidth;
  GC normalGC, dimGC, boldGC, currGC, specialGC;
  int cvisible;
  GC blackGC;
  Colormap cmap;
  int screen;
  long bold, normal, dim, black, special;
  int width;
  int height;
  XFontStruct *font_s;
  int Xpos;
  int pixmapmode;
  int Ypos;
  int mmwidth, mmheight;
  unsigned char *previoust, *previousa;
  int font;
  int pixelwidth, pixelheight;
};

int __aa_X_getsize(struct aa_context *c,struct xdriverdata *d);
void __aa_X_redraw(aa_context *c);
