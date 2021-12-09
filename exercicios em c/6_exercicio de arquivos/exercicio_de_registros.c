#include<stdio.h>
#include <string.h>

typedef struct 
{
    char nome[40];
     double nota1;
     double nota2;
     double nota3;
     double media;
} Aluno_notas;

void imprimir(Aluno_notas p){
    printf(" \n Aluno: %s ", p.nome);
    printf(" \n nota 1: %.1f ", p.nota1); 
    printf(" \n nota 2: %.1f ", p.nota2);
    printf(" \n nota 3: %.1f ", p.nota3);
    printf(" \n media: %.2f ", p.media);
}

int main(){
   Aluno_notas aluno = {"Manoel",10,7,8.5,aluno.media = (aluno.nota1+aluno.nota2+aluno.nota3)/3};
   imprimir(aluno);
   return 0;
}