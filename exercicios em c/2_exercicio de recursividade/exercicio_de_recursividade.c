 #include<math.h>
#include<stdio.h>

int binario(int a);

main(){
    int b;
    printf("escolha um numero pra ser transformado em binario: ");
    scanf("%d",&b);
    binario(b);
}
int binario(int a){
    if(a == 0) printf("0"); 
    else {
        if(a == 1) printf("1");
        else{   int quocient = a/2;
                int resto = a % 2;
                printf("%d\n",resto);
                if(quocient != 1) binario(quocient);
                else printf("1");
            }
        }
}