#include<stdio.h>
#include<math.h>

main(){
    int a,i,fat;
    printf("digite um numero: ");
    scanf("%i",&a);
    fat = 1;
   for(i=1;i<=a;i++){
       fat = fat * i;
    }
    printf("%i",fat);
}
