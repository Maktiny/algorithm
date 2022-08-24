#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char **argv)
{
  printf ("Hello world\n");
  void *m = main;
  *((char *) m) = 0;
  exit (0);
}
