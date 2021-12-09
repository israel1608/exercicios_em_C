#include <math.h>
#include <stdio.h>

main(){
    float resposta,a,b;
    printf("escolha o primeiro valor: ");
    scanf("%f",&a);
    printf("escolha o segundo valor: ");
    scanf("%f",&b);
    resposta = a/b;
    if(resposta>10){resposta = floor(resposta) ;}
    printf("%.2f",resposta);

}







