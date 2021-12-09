#include<stdio.h>
#include<math.h>

main(){
    int dia, mes, dia2, mes2,totalI,totalF,Total;
    printf("Insira o mes inicial: ");
    scanf("%i", &mes);
    printf("Insira o dia do mes inicial: ");
    scanf("%i", &dia);
    printf("Insira o mes final: ");
    scanf("%i", &mes2);
    printf("Insira o dia do mes final: ");
    scanf("%i", &dia2);
    int mes_dias[13] = {0,0,31,59,90,120,151,181,212,243,273,304,334};
    totalI = mes_dias[mes] + dia ;
    totalF = mes_dias[mes2] + dia2 ;
    Total = totalF - totalI ;

    printf("%i",Total);
    printf(" dias");
} 
