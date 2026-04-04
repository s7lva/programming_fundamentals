#include <stdio.h>
#include <math.h>

int main(){

    float soma = 1.0;
    float denominador = 2.0;

    for(int i = 1 ; i<= 10 ; i++){
      soma = 1/i;

        if(i %2 ==0){
            soma += 1.0/denominador;
        }else{
            soma -= 1.0/denominador;
        }
    }

     printf("O resultado da serie e: %.2f\n", soma);
}