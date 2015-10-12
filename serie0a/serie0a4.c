#include <stdio.h>

int
main ()

{
  float F,C;
  printf ("Que temperatura em graus celsius quer calcular?\n");
  scanf ("%f",&C);

F= C*1.8 +32;
 printf("Temperatura em Fahrenheit: %f\n", F);

 return 0;
}
