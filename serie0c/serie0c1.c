#include <stdio.h>
int
main()
{
  int x,y,z;
  FILE *f1;
  y=0;

f1= fopen ("tabfile.txt", "wt");
  printf ("Escolha a tabuada\n");
  scanf ("%d", &x);
    printf ("\n Tabuada do %d\n", x);

  while (y<=10)
    { 
z=x*y;
 
 printf ("%d X %d = %d \n",x, y, z);
 fprintf (f1, "%d X %d = %d \n", x, y, z);
 y=y+1.;

    }

 fclose (f1);
    

  return 0;
    }
