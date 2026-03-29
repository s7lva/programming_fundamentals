#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
  int valor;

   maior(&valor , 10);
   printf("o maior valor do array é %d" , valor);
   return 0;
}


int maior(int *vec, int size){
   char valorinicial=1;
   
   int array[10];
   int maiorvalor;
   int num;

   for(int i =0 ; i <=size ; i++){
    printf("indique os valores do array" , i+1);
    scanf("%d" , &array[i]);
    
    //impede que receba lixo de memoria
    if(valorinicial){
     *vec= array[i];
    }

    // compara para descobrir o maior valor o ponteiro aponta 
    //para o numero atual introduzido de forma a descobrir qual o maior
    if(array[i] > *vec){
        *vec = array[i];
    }
   }

}