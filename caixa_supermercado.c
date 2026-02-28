#include <stdio.h>


int main(){
    
    float preco_produto;
    int quantidade_produto;
    int total_a_pagar;
    int resposta;
    int adicionar;
    float desconto;

    printf("indique o preço a pagar por cada produto: ");
    scanf("%f" , &preco_produto);

    printf("indique a quantidade de produtos: ");
    scanf("%d" , &quantidade_produto);

    if(quantidade_produto < 0){
            printf("quantidade de produtos invalida! \n");
    }
  

    do
    {
       printf("deseja inserir mais produtos");
       scanf("%d" ,&resposta);
        
    
    

    } while(resposta ==1 );{
      printf("indique quantos produtos quer adicionar");
      scanf("%d" , &adicionar );

      quantidade_produto = quantidade_produto + adicionar;
      
    }


    total_a_pagar= quantidade_produto * preco_produto;

if (total_a_pagar<100){
    
    desconto= total_a_pagar* 0.50;
    total_a_pagar = total_a_pagar - desconto;
    printf("O total a pagar com desconto é : %.2f" , total_a_pagar);
}else{
    printf("Sem desconto");
}

return 0;
}