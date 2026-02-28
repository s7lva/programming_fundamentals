#include <stdio.h>
#include <stdlib.h>

int main(){

    float euros;
    int conversor;

    printf("indique o valor em euros");
    scanf("%f" , &euros);

    printf("Escolha a moeda: 1-Dolar, 2-Libras, 3-Ienes ");
    scanf("%d" , &conversor);
 
    switch (conversor) {
       case 1:
       float dolar = euros *1.08;
       printf("Tem o valor em dolar de : %.2f\n" , dolar);
       break;

       case 2:
       float libras = euros *0.86;
       printf("Tem em libras: %.2f\n" , libras);
       break;

       case 3:
       float ienes = euros *163.0;
       printf("Tem em ienes: %.2f\n" , ienes);
       break;

       default:
       printf("Não é uma opção valida");
       break;
    }

}