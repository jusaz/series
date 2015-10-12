#include <stdio.h>
#include <math.h>
int
main()
{
  double x0, r, i, x, y, z, r1;
  FILE *stuff;

  stuff=fopen ("stuff.txt", "wt");
    printf("Escreva os valores de x0 e r\n");
  scanf("%lf %lf", &x0, &r);
  fprintf(stuff, "a%lf %lf\n", x0, r);
  i=0;
  y=0;
  x=x0;
  printf ("Valores dados\n");
  while(i<1000)
    {
      y=r*x*(1-x);
      i++;
      printf(" %lf  %lf\n ", x, y);
      if (fabs(x-y)<=0.0001)
        break;
      x=y; 
    }
  x=y;

 for(r1=1; r1<64; r1++)
    {
    z=r*x*(1-x);
     if(fabs(z-y)<=0.0001)
       break;
     x=z;
    }
  printf("%lf\n", r1);
  fprintf(stuff, "b%lf\n", r1);
  x=y;

  for(r1=1; r1<64; r1++)
    {
    z=r*x*(1-x);
     printf("%lf\n", z);
     fprintf (stuff, "c%lf\n", z);
     if(fabs(z-y)<=0.0001)
       break;
     x=z;
    }

  fclose (stuff);
  return 0;
}
