#include <stdio.h>

int main()
{
    int x,y,z;
    y=0;

    printf ("Escolha a tabuada\n");
    scanf ("%d", &x);
    printf ("\n Tabuada do %d\n", x);

    while (y<=10)
    {
        z=x*y;
        printf ("%d X %d = %d \n",x, y, z);
        y=y+1.;
    }
    
    return 0;
}
