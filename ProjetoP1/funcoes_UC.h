#ifndef FUNCOES_UC_H_INCLUDED
#define FUNCOES_UC_H_INCLUDED
#include <stdio.h>
#include "constantes.h"
#include "estruturas.h"
#include "funcoes_auxiliares.h"
tipoUC lerDadosUC(int quantUC, tipoUC vUC[]);
void inserirUC(int *quantUC, tipoUC vetorUC[]);
int procuraUC(int quantUC, tipoUC vUC[], int var);
#endif // FUNCOES_UC_H_INCLUDED
