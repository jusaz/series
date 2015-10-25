#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    const int argumentNumber = 3;
    int sizeString = 0;
    int i;

    if(argc != argumentNumber)
    {
        printf("Inicie o programa da seguinte forma:\n"
               "./NOME_DO_PROGRAMA STRING_1 STRING_2\n");
    }
    else
    {
        //Alínea a)
        for(i = 1; i < argc; i++)
        {
            int size = strlen(argv[i]);
            sizeString += size;
            printf("String %d: %s, Comprimento: %d\n", i, argv[i], size);
        }

        //Alínea b)
        char* newString1 = (char*) malloc(sizeString * sizeof(char));
        strcpy(newString1, argv[1]);
        strcat(newString1, argv[2]);
        printf("A nova string criada na alínea b: %s\n", newString1);

        //Alínea c)
        char* newString2 = (char*) malloc(sizeString * sizeof(char));
        strcpy(newString2, argv[2]);
        strcat(newString2, argv[1]);
        printf("A nova string criada na alínea c: %s\n", newString2);

        //Alínea d)
        sizeString = strcmp(newString1, newString2);

        if(sizeString < 0)
        {
            printf("Pelo critério da função strcmp "
                   "a String\n %s é maior que a string"
                   " %s.\n", newString2, newString1);
        }
        else if(sizeString > 0)
        {
            printf("Pelo critério da função strcmp "
                   "a String %s\né maior que a string"
                   " %s.\n", newString1, newString2);
        }
        else
        {
            printf("As strings são iguais.\n");
        }

        free(newString1);
        free(newString2);
    }
    return 0;
}

