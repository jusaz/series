#include <stdio.h>
#include <math.h>

int
main ()

{
  int i;
  double x0, r, x, y, z, r1;
FILE *stuff;
 stuff=fopen ("stuff.txt", "rt");
 fscanf(stuff, "a%lf %lf\n", &x0, &r);
 printf("x0= %lf r= %lf\n", x0, r);
 fscanf(stuff, "b%lf\n", &r1);
 printf("%lf\n", r1);

 for (i=1; i<=r1; i++)
   {
 fscanf (stuff, "c%lf ", &z);
 printf ("%lf ", z);
 if ((i % 4) == 0)
    printf ("\n");
   }
 fclose (stuff);

 return 0;
}
