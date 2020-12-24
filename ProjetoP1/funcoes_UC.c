#include "funcoes_UC.h"

tipoUC lerDadosUC(int quantUC, tipoUC vUC[])
{
    int tipo, controlo, aux ;
    tipoUC uc;
    do
    {
        printf("Insira o codigo da UC:\n");
        aux = lerInteiro(1, 40);

        controlo = procuraUC(quantUC, vUC, aux);
       printf("controlo: %d\n", controlo);
        if (controlo == 1)
        {
            printf("Ja existe uma UC com o codigo introduzido!");

        }
        else
        {
            controlo = 2;
        }
    }
    while(controlo!=2);
        uc.codigo = aux;
    printf("Insira o nome da UC:\n");
    lerString(uc.nomeUC, MAX_STRING);

    printf("Insira o tipo da UC (1 - obrigatorio ou 2 - opcional):\n");
    tipo = lerInteiro(1,2);
//   if (tipo!=1 && tipo!=2){
//    printf("Valor introduzido invalido!");
//   }

    switch(tipo)
    {
    case 1:
        uc.tipo = 1;
        break;
    case 2:
        uc.tipo = 2;
        break;
        default: printf("Valor introduzido invalido!");

    }

    printf("Insira o semestre (1 a 6):\n");
    uc.semestre = lerInteiro(1, 6);

    printf("Insira o regime de funcionamento (1 - diurno ou 2 - pos-laboral):\n");
    tipo = lerInteiro(1,2);
    switch(tipo)
    {
    case 1:
        uc.regime = 1;
        break;
    case 2:
        uc.regime = 2;
        break;

    default:
        printf("Valor introduzido invalido! Insira novamente um valor");

    }

    printf("Insira a quantidade de aulas online T previstas:\n");
    uc.quantT = lerInteiro(0, 1000);

    printf("Insira a quantidade de aulas online TP previstas:\n");
    uc.quantTP = lerInteiro(0, 1000);

    printf("Insira a quantidade de aulas online PL previstas:\n");
    uc.quantPL = lerInteiro(0, 1000);

    printf("Insira a duracao das aulas (em minutos):\n");
    uc.duracao = lerInteiro(1, 360);

    return uc;
}


void inserirUC(int *quantUC, tipoUC vetorUC[])
{

    tipoUC vUC[MAX_UC];

    if(*quantUC == MAX_UC)
    {
        printf("Quantidade maxima de UCs alcancada!");
    }
    else
    {

        vUC[*quantUC] = lerDadosUC(*quantUC, vUC);
        *quantUC++;
        printf("i++: \n");
    }

}

int procuraUC(int quantUC, tipoUC vUC[], int var)
{

    int i, aux=2, sopa=0;
printf("quantidade: %d\n", quantUC);
printf("var: %d\n", var);
while(sopa=0){
    for(i=0; i<quantUC; i++)
    {

        if(var == vUC[i].codigo)
        {
            aux = 1;
            sopa = 1;
            printf("passei aqui");
        }
        else
        {
            aux = 2;
        }
    }
    sopa = 1;

}
printf("procura: %d\n", aux);
return aux;
}
