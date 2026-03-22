#include <stdio.h>
#include <stdbool.h>


int main(){
  int temp;
  int valores[] = {20,30,210,10,14}; 

  temp = valores[0];
  valores[0] = valores[4];
  valores[4] = temp;
  
 for ( int i =0 ; i < valores[5] ; i++){
    printf("%d " , valores[i]);

 }


}