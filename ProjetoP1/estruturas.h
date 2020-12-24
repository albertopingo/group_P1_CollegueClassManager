#ifndef ESTRUTURAS_H_INCLUDED
#define ESTRUTURAS_H_INCLUDED
#include "constantes.h"

typedef struct{
int dia, mes, ano;
}tipoData;


typedef struct{
int codigo;
char nomeUC[MAX_STRING];
int tipo;
int semestre;
int regime;
int quantT, quantTP,quantPL;
int duracao;
}tipoUC;

typedef struct{
int codigo;
char nomeAula[MAX_STRING];
char tipo[MAX_STRING];
char nomeDocente [MAX_STRING];
tipoData data;
int hora, minutos;
char estado [MAX_STRING];
char gravacao [MAX_STRING];
}tipoAula;
#endif // ESTRUTURAS_H_INCLUDED
