#include <stdio.h>

int
main ()

{
  float F;int C;
  C=0;

  while (C<=100)
    {
F= C*1.8 +32;
 
 printf("%d Celsius =  %6.2f Fahrenheit\n", C, F);
 C=C+1.;

    }

 return 0;
}
