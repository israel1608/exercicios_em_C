#include<stdlib.h>

int buscaBinaria(int *vet,int chave,int inicio,int fim){
    int meio,resp = 0; 
    if(inicio <= fim){
        meio = (inicio + fim) / 2;
        if(chave == vet[meio]){
        printf("encontrou na posicao: %d",meio);
        resp = 1;
        }
        else{
            if(chave < vet[meio])
                 return buscaBinaria(vet,chave,inicio,meio-1);
            else
                return buscaBinaria(vet,chave,meio+1,fim);
        }
    }
    if(resp == 0) printf("chave nao encontrada");
}

int main(){
    int x;
    int vet[10] = {5,7,9,11,34,36,41,43,55,60};
    printf("valor da chave: ");
    scanf("%d",&x);
    buscaBinaria(vet,x,0,9);
}