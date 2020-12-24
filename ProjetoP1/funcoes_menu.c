#include <stdio.h>
#include <ctype.h>
#include "funcoes_auxiliares.h"


char menu(){
    char opcao;

    printf("\n\n ************************ Menu Principal ************************\n\n");
    printf(" Quantidade de UCs: **\t\t\t\tQuantidade de aulas agendadas: **\n\n");
    printf(" Quantidade de aulas realizadas: **\t\t\t\tQuantidade de aulas gravadas: **\n\n\n");
    printf(" 1 - Inserir UC\n");
    printf(" 2 - Alterar UC\n");
    printf(" 3 - Listar UC\n");
    printf(" 4 - Listar a quantidade de estudantes e acessos as gravacoes\n");
    printf(" 5 - Alterar aula agendada(eliminar ou alterar)\n");
    printf(" F - Fim\n");
    printf(" \t\tOpcao--> ");

    do{
        scanf("%c", &opcao);
        opcao = toupper(opcao);
        limpaBufferStdin();
        if (opcao!='1' &&  opcao!='2' && opcao!='3' && opcao!='4' && opcao!='5' && opcao!='F'){
            printf(" \t\tOpcao invalida\n\t\t Insira uma nova opcao--> ");
        }

    }while(opcao!='1' &&  opcao!='2' && opcao!='3' && opcao!='4' && opcao!='5' && opcao!='F');

    return opcao;
}
