#include <stdio.h>
#include <stdbool.h>

inverteVetor(int *vec, int tamanho);

int main(){
   int arraytrocado[10];

   int array[10];
   for(int i= 0 ; i>= array[i] ; i++){
    printf("indique os valores do array" , i+1);
    scanf("%d" , array[i]);
   }

   for(int j =0 ; j<10; j++){
      printf("%d" , arraytrocado[j]);
   }

}

inverteVetor(int *vec, int tamanho){
   int auxiliar;


    for( int i =0 ; i<=tamanho ; i++){
        auxiliar = vec[0];
        vec[0] = vec[tamanho-1];
        vec[tamanho-1] = auxiliar;
    }
}