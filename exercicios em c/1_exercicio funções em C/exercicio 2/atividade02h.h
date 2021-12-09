#ifndef UTIL_H
#define UTIL_H
#include<stdio.h>
#include<math.h>

int total_dias(int mes,int dia,int mes2,int dia2);
int total_dias(int mes,int dia,int mes2,int dia2){
    
    int mes_dias[13] = {0,0,31,59,90,120,151,181,212,243,273,304,334};
    int totalI = mes_dias[mes] + dia ;
    int totalF = mes_dias[mes2] + dia2 ;
    int Total = totalF - totalI ;
    printf("%i",Total);
    printf(" dias");
}
#endif 