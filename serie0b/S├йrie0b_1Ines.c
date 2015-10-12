#include <stdio.h>
#include <math.h>

int
main ()
{
  double a, b, c, d, s1, s2, p, q;
  printf("Escreva os valores dos parametros a, b e c separados por espaços \n");
  scanf ("%lf %lf %lf", &a, &b, &c);
  d=b*b-4*a*c;
  printf("delta = %lf \n",d);
    if (d>0)
      {s1= (-b + sqrt(d))/(2*a); 
    s2= (-b - sqrt(d))/(2*a);
printf("As solucoes sao %lf e %lf \n", s1, s2);
    }

if (d==0)
  {s1 = -b/(2*a);
    printf("A solução (dupla) é %lf \n", s1);

   }

if (d<0)
  {
    p= -b/(2*a);
    q= sqrt(-d)/(2*a);
s1= p + qi
s2= p + qi
  printf("As solucoes são %lf e  %lf \n", s1, s2);
 
  }
    
return 0;


  }
