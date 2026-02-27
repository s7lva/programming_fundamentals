#include <stdio.h>


#define TAXA_1 (0.3/60)
#define TAXA_1_5 (0.15/60)
#define TAXA_5_INF (0.08/60)
#define SEC_1_MIN (60)
#define SEC_5_MIN (5*60)
#define SEC_8_MIN (8*60)
#define SEC_20_MIN (20*60)

int main(){

int temp_chamada;
float custo = 0;

int duration = 60 ; //segundos


printf("indique me o tempo da sua chamada em seg");
scanf("%d" , &duration);

if(duration < 0){
    printf("Duração invalida! \n");
}


if(duration < SEC_1_MIN){
 custo = duration * TAXA_1;
}else{ 
    if(duration < SEC_5_MIN){
        custo = TAXA_1 *SEC_1_MIN +(duration - SEC_1_MIN) *TAXA_1_5;
    }else{
        if(duration < SEC_8_MIN){
         custo = TAXA_1 * SEC_1_MIN + 240*TAXA_1_5  +(duration - SEC_5_MIN) * TAXA_5_INF;
        }else{
            custo = (SEC_1_MIN * TAXA_1) + (SEC_5_MIN - SEC_1_MIN) * TAXA_1_5 + (duration - SEC_5_MIN) * TAXA_5_INF;
        }
    }
}

if(duration > SEC_20_MIN){
    custo = custo *0.90;
}

printf("O valor a pagar sera: %.2f\n " , custo);

return 0;


    
}

