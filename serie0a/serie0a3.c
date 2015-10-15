#include <stdio.h>

int
main ()

{
	// um conselho: não uses nomes de variáveis como este C, F.
	// em programas mais complicados não sabes a que é que se refere
	// e torna a leitura do código complicada
	// Ficava melhor: float tempFahr, int tempCelcius 
	// e nunca uses nomes de variáveis só em maiusculas.
	// normalmente o nome todo em maisculas é só usado para #defines
	// que sáo directivas usadas o pré processamente como o #include :)
	float F;int C;  
	C=0;
	while (C<=100)
    {
    	F= C*1.8 +32;
    	printf("%d Celsius =  %6.2f Fahrenheit\n", C, F);
    	//não percebo a indentação por 1. usar C++
    	C++; 
    }

    return 0;
}
