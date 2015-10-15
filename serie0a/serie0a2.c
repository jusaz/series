#include <stdio.h>

int main()
{
	int x,y,z;
	x=9;
	y=0;

	printf ("\n Tabuada do 9\n");
	
	while (y<=10)
	{ 
		z=x*y;
		printf ("%d X %d = %d \n", x, y, z);
		y=y+1.; //normalmente quando incrementas a variável em 1 escreves (e neste caso) y++ 
    }

    return 0;
}
