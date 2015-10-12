#include <stdio.h>

int
main ()

{

  int a, b, c, i;  
  FILE *k;
  i=0;
  k=fopen ("tabfile.txt", "rt");

  while (i<11)

    {
  fscanf (k, "%d X %d = %d\n", &a, &b, &c);
  printf ( "%d X %d = %d\n", a, b, c);
  i++;
    }

  fclose (k); 

  return 0;
}
