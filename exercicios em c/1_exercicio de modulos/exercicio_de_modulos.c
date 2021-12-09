#include <stdio.h>
main(){
    int a,b,resposta;
    printf("escolha o primeiro numero: ");
    scanf("%d",&a);
    printf("escolha o segundo numero: ");
    scanf("%d",&b);
    if(b>a){
    resposta = b - a - 1;
    } else {resposta = a - b - 1;}
    printf("\n%d",resposta);
}