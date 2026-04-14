#include <stdio.h>

int main(){

   int opcoes;
   int fio_solda =500;
   int peso_rolo;
   int fio_disponivel;
   int valor;

   printf("indique um numero para começar");
   scanf("%d" , &opcoes);

   while (opcoes!=3){
       // 1. Mostrar o Menu
       printf("\n--- ROBO DE SOLDADURA ---\n");
       printf("Fio atual: %d gramas\n", fio_solda);
       printf("[1] Peca Pequena (50g)\n");
       printf("[2] Peca Grande (120g)\n");
       printf("[3] Desligar\n");
       printf("Opcao: ");
       
       scanf("%d", &opcoes);
   switch(opcoes){
    case 1:
        fio_disponivel = processar_soldadura(fio_solda , 50.0);
        break;
    case 2: 
        fio_disponivel= processar_soldadura(fio_solda , 120);
        break;
    case 3:
        printf("A desligar....");
        break;
    
    default:
     printf("o robo não entendeu a ordem");
     break;
   }
}
return 0;
}

int processar_soldadura( int fio_atual , int gasto_da_peca){

   // VERIFICAÇÃO DE SEGURANÇA (O Robô tem fio que chegue?)
    if (fio_atual >= gasto_da_peca) {
        // Tem fio! Faz a conta.
        fio_atual = fio_atual - gasto_da_peca;
        printf("Soldadura concluida!\n");
    } else {
        // Não tem fio! Grita erro e não gasta nada.
        printf("ERRO: Fio insuficiente para esta peça!\n");
    }

    return fio_atual;
}