#include <stdio.h>

#define DIM 4

int main(){

 int matriz[DIM][DIM];

 for(int i =0 ; i < DIM ; i++){
    for(int j =0 ; j<DIM ; j++ ){
        printf("elementos[%d][%d]" , i+1 , j+1);
        printf("%d" , matriz[DIM]);
    }
 }
  
 for(int i =0 ; i< DIM ; i++){
    for(int j=0 ; i<DIM ; j++){
        printf("%3d", matriz[DIM][DIM]);
    }
 }

 return 0;


}