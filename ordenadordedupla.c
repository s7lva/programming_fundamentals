#include <stdio.h>

ordenaDois(int *n1, int *n2);

int main(){

   int num1;
   int num2;
   printf("indique o primeiro numero");
   scanf("%d" , &num1);

   printf("indique o segundo numero");
   scanf("%d" , &num2);

   ordenaDois(&num1 , &num2);
   print("Os valores ordenados de menor a maior é %d %d" , num1, num2);


}

ordenaDois(int *n1, int *n2){
  
    int maiorvalor;
    int auxiliar;

    if(*n1 > *n2){
    auxiliar= *n1;
    *n1 = *n2;
    *n2 = auxiliar;
    printf("Ordenado: %d e %d\n", *n1, *n2);
    }else{
     printf("nada a alterar");
    }
   

    


}