#include <stdio.h>

int main(){
   double volume_trafico=0.0;
   int quantidadenucleos=0;
   double custo_trafego_dados=0.0;
   double taxa_infrastrutura = 45.50;
   int estatuto_cliente;
   double custo_cliente=0.0;


   printf("indique o volume de traficos ");
   scanf("%lf" , &volume_trafico);

   printf("indique a quantidade de nucleos");
   scanf("%d" , &quantidadenucleos);

   printf("indique se tem estatuto entreprise (1-sim/0-não)");
   scanf("%d" , &estatuto_cliente);

   if(volume_trafico<=5){
    custo_trafego_dados = volume_trafico*8;
   }else if(volume_trafico>=5 && volume_trafico<=25){
    custo_trafego_dados = 5*8 +((volume_trafico-5)*4.50);
   }else{
    custo_trafego_dados= 5*8 + 20*4.50 +((volume_trafico-25)*2);
   }

    custo_cliente= custo_trafego_dados +taxa_infrastrutura + quantidadenucleos*12;

    if (estatuto_cliente == 1) {
    custo_cliente = custo_cliente - 50.00;
    
    // O ESCUDO DO ZERO FICA *DENTRO* DO VIP! 
    // Porque só quem leva desconto é que corre o risco de ficar negativo!
    if (custo_cliente < 0) {
        custo_cliente = 0.0;
    }
}
        
        
    


  printf("o valor a pagar pelo cliente é: %.2lf" , custo_cliente);

  return 0;


}