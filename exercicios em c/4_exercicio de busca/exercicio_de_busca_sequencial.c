#include<stdio.h>

buscar(int vetor[],int x);
main(){
    int a;
    printf("escolha o valor que deseja procurar: ");
    scanf("%d",&a);
    int notas[5] = {1,4,6,7,5};
    buscar(notas,a);
}

int buscar(int vetor[],int x){
   size_t n = sizeof(vetor);
    int busca = 0;
    for(int i = 0; i <= n;i++){
        if(vetor[i] == x){
          printf("\nachou %d na posicao: %d\n",x,i);
          busca = 1;
        }  
    } 
    if(busca == 0) printf("\nNao encontrou\n");
}