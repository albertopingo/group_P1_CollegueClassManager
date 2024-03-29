#include <stdio.h>
#include <string.h>

#include "funcoes_auxiliares.h"

// Acrescentada vari�vel de controlo ao scanf
int lerInteiro(int minimo, int maximo)
{
    int numero, controlo;
    do
    {
        controlo = scanf ("%d", &numero);  // scanf devolve quantidade de valores v�lidos obtidos
        limpaBufferStdin();     //limpa todos os caracteres do buffer stdin (nomeadamente o \n)

        if (controlo == 0)
        {
            printf("Devera inserir um numero inteiro \n");
        }
        else
        {
            if(numero<minimo || numero>maximo)
            {
                printf("Numero invalido. Insira novamente:\n");
            }

        }
    }
    while(numero<minimo || numero>maximo || controlo ==0);

    return numero;
}

float lerFloat(float minimo, float maximo)
{
    float numero;
    int controlo;
    do
    {
        controlo = scanf ("%f", &numero);  // scanf devolve quantidade de valores v�lidos obtidos
        limpaBufferStdin();

        if (controlo == 0)
        {
            printf("Devera inserir um numero decimal (float) \n");
        }
        else
        {

            if(numero<minimo || numero>maximo)
            {
                printf("Numero invalido. Insira novamente:\n");
            }

        }
    }
    while(numero<minimo || numero>maximo || controlo ==0);

    return numero;
}

void lerString(char vetorCaracteres[MAX_STRING], int maximoCaracteres)
{
    int tamanhoString;

    do{			// Repete leitura caso sejam obtidas strings vazias

        fgets(vetorCaracteres, maximoCaracteres, stdin);

        tamanhoString = strlen(vetorCaracteres);

        if (tamanhoString == 1){
            printf("Nao foram introduzidos caracteres!!! . apenas carregou no ENTER \n\n"); //vetorCaracteres tem \n e \0
        }

    } while (tamanhoString == 1);

    if(vetorCaracteres[tamanhoString-1] != '\n'){  // ficaram caracteres no buffer....
        limpaBufferStdin();  // apenas faz sentido limpar buffer se a ficarem caracteres
    }
    else{
        vetorCaracteres[tamanhoString-1] = '\0'; 	//Elimina o \n da string armazenada em vetor
    }

}

void limpaBufferStdin(void)
{
    char chr;
    do
    {
        chr = getchar();
    }
    while (chr != '\n' && chr != EOF);
}
