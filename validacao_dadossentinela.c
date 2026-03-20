#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
     
    float preco_produtos;
    int precosuperior10;
    int media =0;
    int soma_preco;

    do{

        printf("indique o preço de produtos");
        scanf("%f" , &preco_produtos);
       
    if (preco_produtos>10){
       precosuperior10++;
       soma_preco += preco_produtos;
       
    } 
      
    if(soma_preco >0){
      media = soma_preco / precosuperior10;
    }

    }while(preco_produtos != 0);

    printf("Media: %d/n", media);
    printf("Os produtos acima de 10 euros são: %d" , precosuperior10);
    printf("O numero total de produtos é: %d" , preco_produtos);

}