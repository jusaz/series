#include <stdio.h>
#include <math.h>


double conversion (double x) 
{
    if (x<0) 
    { 
        x = -x; 
    }

    x = ((double) fmod (x, 2*M_PI));

    return x; 
}


double factorial (int mouse) 
{
    double mickey; 
    mickey = 1;
    while (mouse >1)
    {
        mickey = mickey * mouse; 
        --mouse;
    }
    return mickey; 
}

double cos2 (double valor)   
{
    double cos2, adicao, adicao1;
    cos2=0;
    int i;
    i=0; 
    while(1)
    {
        adicao= pow((-1),i)* (pow (valor, 2*i))/(factorial(2*i));
        cos2 = cos2 + adicao; 
        if (fabs(adicao) < 1.0e-10)
            break; 
            // printf ("%lf %lf\n", adicao, cos2);
        ++i;
    }

    //printf ("%lf\n", cos2);

    return cos2;
}


int main () 
{ 
    int x;
    double cosseno, valor;

    printf ("Escolha o valor de x\n");
    scanf ("%d", &x ); 
    valor= conversion (x);
    cosseno = cos2 (valor); 

    printf ("O cosseno de '%d' é: %.10lf\n", x, cosseno);
    //printf ("%lf\n", cos(valor));

    return 0;
}
