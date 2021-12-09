#include<stdio.h>
#include<math.h>
#include"atividade02h.h"

main(){
    int a,b,c,d;
    printf("Insira o mes inicial: ");
    scanf("%i", &a);
    printf("Insira o dia do mes inicial: ");
    scanf("%i", &b);
    printf("Insira o mes final: ");
    scanf("%i", &c);
    printf("Insira o dia do mes final: ");
    scanf("%i", &d);
    total_dias(a,b,c,d);
}