#include <stdio.h>



int main(){

float velocidademaxima;
float velocidadecircular;
float excesso_velocidade;



printf("indique a velocidade maxima da via");
scanf("%f" , &velocidademaxima);

printf("indique a velocidade a que vais");
scanf("%f" , &velocidadecircular);

if(velocidadecircular <= velocidademaxima){
   printf("Sem multa dentro dos parametros");

}else if(excesso_velocidade <= 1.20){
    printf("velocidade acima do limite 20%%");
    printf("coima de 60€");
}else if (excesso_velocidade > 1.20 && excesso_velocidade <= 1.50){
    printf("velocidade acima de limite entre 20%% e 50%%");
    printf("multa de 120€");
}else{
    printf("velocidade acima 50%% do limite");
    printf("Multa de 500€");
}

}