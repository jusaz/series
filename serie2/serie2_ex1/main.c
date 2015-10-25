#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateVector(int* ptrToVector, int size, int maxValue);
void printVector(FILE* ptrToFile, int* ptrToVector, int vectorSize);

int main(int argc, char** argv)
{
    /*
       Deseja construir-se um programa que gere ’N’ numeros reais aleatorios no
       intervalo ’[0,Max]’, sendo ’Max’ e ’N’ pedidos ao utilizador.
       Guarde esses valores num vector, os ordene-os por ordem decrescente pelo
       metodo bubblesort, mostre-os no ecran e escreva-os num ficheiro.
    */

    const int numCmdLineParam = 3;
    int Max = 0;
    int N   = 0;

    //Alínea a)
    if(argc == numCmdLineParam)
    {
        Max = atoi(argv[1]);
        N   = atoi(argv[2]);
    }
    else //Alínea b)
    {
        printf("Insira o valor maximo:\n");
        scanf("%d", &Max);
        getchar();
        printf("Insira a quantidade de numeros a gerar:\n");
        scanf("%d", &N);
        getchar();
    }

    //Alínea c)
    int* intVector = (int*)malloc(N * sizeof(int));

    generateVector(intVector, N, Max);

    //escrever na consola
    printVector(stdout, intVector, N);
    //gravar no ficheiro
    printVector(NULL, intVector, N);

    return 0;
}

void generateVector(int* ptrToVector, int size, int maxValue)
{
    int i;
    if(ptrToVector)
    {
        srand(time(NULL));
        for(i = 0; i < size; i++)
        {
            // Para gerar valores inteiros no intervalo [0, Max]
            // calcula-se o resto da divisão inteira por Max + 1.
            // se a divisão for feita por Max o valor máximo é
            // Max - 1;
            ptrToVector[i] = rand() % (maxValue + 1);
        }
    }
}

void printVector(FILE* ptrToFile, int* ptrToVector, int vectorSize)
{
    int i;
    if(NULL == ptrToFile)
    {
        ptrToFile = fopen("intvector.txt", "w");
    }

    if(ptrToFile && ptrToVector)
    {
        for (i = 0; i < vectorSize; i++)
        {
            fprintf(ptrToFile, "intVector[%d] = %d\n", i, ptrToVector[i]);
        }
    }

    fclose (ptrToFile);
}
