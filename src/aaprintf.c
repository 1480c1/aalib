#include <stdarg.h>
#include "aalib.h"
#include "aaint.h"
int aa_printf(aa_context *c, int x, int y, enum aa_attribute attr, __AA_CONST char *fmt, ...)
{
  va_list args;
  char buf[1025];
  int i;
  va_start(args,fmt);
  i=vsprintf(buf,fmt,args);
  va_end(args);
  aa_puts(c,x,y,attr,buf);
  return i;
}
