#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int generateNumber();

int main ()
{
    int x, y, i, r;

    i = 0;
    r = 0;

    while (1)
    {
        if(i == 0 && r == 0)
        {
            r = 3;
            x = generateNumber();
            printf ("Qual o número de 1 a 100 gerado pelo programa?\n");
        }

        scanf("%d", &y);

        if(y >= 1 && y <= 100)
        {
            if (y<x)
            {
                i++;
                printf ("O número que escolheu está abaixo do secreto\n");
                printf ("Insira outro número:\n");
            }

            if (y>x)
            {
                i++;
                printf ("O número que escolheu está acima do secreto\n");
                printf ("Insira outro número?\n");
            }

            if (y==x)
            {
                printf ("Acertou! Em apenas %d tentativas!!!\n", ++i);
                do
                {
                    printf ("Prima 1 para voltar a jogar e prima 2 para sair\n");
                    scanf ("%d",&r);
                    if ( r == 2)
                        return 0;
                    else if ( r == 1)
                    {
                        i = 0;
                        r = 0;
                        break;
                    }
                } while(r != 2 || r != 1);
            }
        }
        else
        {
            printf ("Insira um numero entre 1 e 100:\n");
        }
    }
}

int generateNumber()
{
    srand (time (NULL));
    return 1 + (rand() % 100);
}
