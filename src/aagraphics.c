#include "aalib.h"
#include "aaint.h"
struct aa_graphics *___aa_mkaagraphics (
	   int width, int height, int bgcolor, int fgcolor, int dimcolor,
	   int boldcolor, int specialcolor, char *videoram);
{
  struct aa_graphics *a = (struct aa_graphics *) calloc (sizeof (struct aa_graphics), 1);
  a->width = width;
  a->height = height;
  a->bgcolor = bgcolor;
  a->fgcolor = fgcolor;
  a->dimcolor = dimcolor;
  a->boldcolor = boldcolor;
  a->specialcolor = specialcolor;
  return a;
}
void
___aa_renderfont (struct aagraphics *a)
{
  int i;
  for (i = 0; i < AA_NATTRS; i++)
    {
      if (a->charset[i])
	free (a->charset[i]);
      a->charset[i] = malloc (8 * a->font->height * 256);
    }
  for (i = 0; i < 256; i++)
    {
    }
}
