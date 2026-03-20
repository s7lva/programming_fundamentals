#include <stdio.h>
#include <stdbool.h>

int main(){
   int num1;
   bool numprimo;
   int contador;
   int candidato;
   int encontrou;
   bool teste_primo;

   printf("indique o numero");
   scanf("%d" , &num1);


   
  for(int i =2 ; i< num1 ; i++){
    if(num1 % i ==1){
      numprimo = false;
      break;
    }
   }

   
   if(numprimo== true){
    printf("O numero indicado é primo");
   }else{
    candidato = num1+=1;
    encontrou = false;
   }

   while(encontrou == false){
    bool teste_primo=true;
      
    
    for(int j =2 ; j< candidato ; j++){
    if(num1 % j ==1){
      numprimo = false;
      break;
    }
   }

   }
    return 0;
}





