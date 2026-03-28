#include <stdio.h>
#include <stdbool.h>

int main(){
   int x;
   int i;
   int num1;
   bool numprimo;

  do{
   printf("introduza um numero");
   scanf("%d" ,&num1);
   
   if(num1<2){
    numprimo= false;
  }else{
    numprimo=true;
  }

   for(int i =2 ; i< num1 ; i++){
    if(num1 % i == 0){
      numprimo = false;
      break;
    }
   }


   if(numprimo){
    printf(" O numero %d é primo" , num1);
   }else{
    printf(" O numero %d não é primo" , num1);
   }

  }while(num1 >0);

   x= num1;

   for(i=x+1 ; ; i++){

    if(numprimo){
      break;
    }

   }
   printf("encontrado primo : %d\n" , i);

   return 0;

}





