#include <stdio.h>
#include <stdbool.h>


int main(){
   int num1;
   bool numprimo;

   printf("introduza um numero");
   scanf("%d" ,&num1);
   

   for(int i =2 ; i< num1 ; i++){
    if(num1 % i ==1){
      numprimo = false;
      break;
    }
   }

   if(numprimo ==1 ){
    printf(" O numero %d é primo");
   }else{
    printf(" O numero %d não é primo");
   }

}