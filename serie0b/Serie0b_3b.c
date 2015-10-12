#include <stdio.h>

int
main ()

{

  float  u, x, i, k;
  i=1;
  printf ("Escolha o valor de x0, de u e o numero de iteracoes\n");
  scanf ("%f %f %f", &x, &u, &k); 
  while(i<k+1)
    {x= u*x;
      printf("f(%f)=%f \n",i ,x);
     i=i+1;}
  return 0;
}
