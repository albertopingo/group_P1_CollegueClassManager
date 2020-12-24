#include <stdio.h>
#include <stdlib.h>
#include "constantes.h"
#include "funcoes_UC.h"
#include "funcoes_menu.h"

int main()
{
    char escolha;

    tipoUC vetorUC [MAX_UC];

    int quantUC=0;

    do{
        escolha = menu();

        switch (escolha){
        case '1':

        inserirUC(&quantUC, vetorUC);

            break;
        case '2':
//            Alterar UC
            break;
        case '3':
//            Listar UC
            break;
        case '4':
//            Listar a quantidade de estudantes e acessos as gravacoes
            break;
        case '5':
//            Alterar aula agendada(eliminar ou alterar)
            break;
        case 'F':
            printf(" Fim do programa\n");
        }
    }while(escolha!='F');


    return 0;
}
