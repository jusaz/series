#include <stdio.h>

int
main ()

{
  float F,C;
  int E;

  while (1)
 
    {

  printf ("Escolha a conversão que quer efetuar: 1=C para F ou 2= F para C\n");
  scanf ("%d", &E);
  if (E ==1)
    {
      printf ("Que temperatura em graus celsius quer calcular?\n");
      scanf ("%f",&C);

      if (C<-273.15)
        { 
          printf ("Não calculo\n");
        }
      else
	{ F= C*1.8 +32;
          printf("%f Celsius equivale a %f Fahrenheit\n", C, F);
	}
    }




  if (E ==2)
    {
     printf ("Que temperatura em graus fahrenheit quer calcular?\n");
     scanf ("%f",&F);
     C=(F-32)/1.8;
       if (C<-273.15)
         { printf ("Não calculo\n");
         }
        else 
          {printf("%f Fahrenheit equivale a %f Celsius\n", F, C);
          }
     }
    }
 
 return 0;

}
