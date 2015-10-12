#include <stdio.h>
#include <math.h>
int
main()
{
  double x0, r, i, x, y;
  printf("Escreva os valores de x0 e r\n");
  scanf("%lf %lf", &x0, &r);
  i=0;
  y=0;
  x=x0;
  while(i<1000)
    {
      y=r*x*(1-x);
      i++;
      printf(" %lf  %lf\n ", x, y);
      if (fabs(x-y)<=0.001)
        break;
      x=y;
      
    }
  return 0;
}
