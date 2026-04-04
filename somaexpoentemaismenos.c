#include <stdio.h>
#include <math.h>

int main(){
   float soma = 1.0;
   float denominador = 1.0;
   int expoente;
   int x;
   for(int i =1 ; i<=10 ; i++){
      
      if(i%2 != 0){
        soma += pow(x , i)/i;
      }else{
        soma -= pow(x , i)/i;
      }
   }
   printf("o resultado da serie é : %.2f" , soma);

   return 0;
}