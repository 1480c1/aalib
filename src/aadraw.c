#include <aalib.h>
int
main (int argc, char **argv)
{
  aa_context *context;
  aa_renderparams *params;
  aa_palette palette;
  if (!aa_parseoptions (NULL, NULL, &argc, argv) || argc != 1)
    {
      printf ("%s", aa_help);
      exit (1);
    }
  context = aa_autoinit (&aa_defparams);
  if (context == NULL)
    {
      printf ("Failed to initialize aalib\n");
      exit (1);
    }
  params = aa_getrenderparams ();
  bitmap = aa_image (context);
  /* Create palette if needed: */
  for (i = 0; i < 256; i++)
    aa_setpalette (palette, i, /* R value 0..255 */ ,
                               /* G value 0..255 */ ,
                               /* B value 0..255 */ );

  /* Draw something using: */
  aa_putpixel (context, /* X coord */ , /* Y coord */ , /* Color */ );

  /* Render whole screen: */
  aa_renderpalette (context, palette, params,
		    /* Top left conner of rendered area: */ 0, 0,
		    /* Bottom right */  aa_scrwidth (context), aa_scrheight (context));

  /* And make it visible: */
  aa_flush (context);

  /* And make it inivisible: */
  aa_close (context);

  return 1;
}
