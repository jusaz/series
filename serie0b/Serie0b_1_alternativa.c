#include <stdio.h>
#include <math.h>

int main ()
{
    double a, b, c, d, s1, s2, p, q;

    printf("Escreva os valores dos parametros a, b e c separados por espaços \n");
    
    scanf ("%lf %lf %lf", &a, &b, &c);

    //d=b*b-4*a*c; porque não assim:

    d = pow(b,2) - 4*a*c;

    double doisA = 2 * a;
  
    printf("delta = %lf \n",d);
    
    if (d > 0)
    {
        double deltaSqrt = sqrt(d); //esta variável só é válida dentro deste grupo de chavetas
        s1= (-b + deltaSqrt) / (doisA); 
        s2= (-b - deltaSqrt) / (doisA);
        printf("As solucoes sao %lf e %lf \n", s1, s2);
    }
    else if (d == 0)
    {
        s1 = -b/(doisA);
        printf("A solução (dupla) é %lf \n", s1);
    }
    else if (d < 0)
    {
        p= -b/(doisA);
        q= sqrt(-d)/(doisA);
        printf("As solucoes são %lf + %lfi e  %lf - %lfi \n", p, q, p, q);
    }

    return 0;
}
