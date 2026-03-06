#include <stdio.h>


int main(){
    
    float preco_produto;
    int quantidade_produto;
    int total_a_pagar;
    int resposta;
    int adicionar;
    float desconto;


    FILE *file_ptr;
    file_ptr = fopen("valores da compra.txt", "w"); 


    printf("indique o preço a pagar por cada produto: ");
    scanf("%f" , &preco_produto);

    printf("indique a quantidade de produtos: ");
    scanf("%d" , &quantidade_produto);

    if(quantidade_produto < 0){
            printf("quantidade de produtos invalida! \n");
    }
  

   do {
       printf("\nDeseja inserir mais produtos? (1-Sim / 0-Não): ");
       scanf("%d", &resposta);

       if (resposta == 1) { // Só entra aqui se o utilizador quiser mesmo adicionar
           printf("Indique quantos produtos quer adicionar: ");
           scanf("%d", &adicionar);
           quantidade_produto = quantidade_produto + adicionar;
       }

    } while (resposta == 1);



    total_a_pagar= quantidade_produto * preco_produto;

   if (file_ptr == NULL) {
       printf("Error opening file!");
       return 1;
   }

if (total_a_pagar<100){
    
    desconto= total_a_pagar* 0.50;
    total_a_pagar = total_a_pagar - desconto;
    printf("O total a pagar com desconto é : %.2d€" , total_a_pagar);
}else{
    printf("Sem desconto");
}

   fprintf(file_ptr ,"------Resumo da compra------");
   fprintf(file_ptr ,"\n Quantidade total %d€\n" , quantidade_produto);
   fprintf(file_ptr , " Total final pago %d€\n" , total_a_pagar);


   fclose(file_ptr);
   printf("\n dados guardados com sucesso no ficheiro \n");

return 0;
}