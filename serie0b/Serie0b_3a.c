#include <stdio.h>

int
main ()

{

  float  u, x, i;
  i=1;
  printf ("Escolha o valor de x0 e de u\n");
  scanf ("%f %f %f", &x, &u); 
  while(i<21)
    {x= u*x;
      printf("f(%f)=%f \n",i ,x);
     i=i+1;}
  return 0;
}
