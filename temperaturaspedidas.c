#include <stdio.h>

processaTermometro(int *max, int *min, int n);

int main(){
   int maior;
   int menor;
   int num;

   printf("indique o numero de temperaturas que pretende introduzir");
   scanf("%d" , &num);
   

   processaTermometro(&maior , &menor , num );
   printf("A maior temperatura introduzida é: %.2f" , maior);
   printf("A menor temperatura introduzida é: %.2f" , menor);

}

processaTermometro(int *max, int *min, int n){
    float pedidos;
    char inicio=1;

    

    
      

      for(int i =0 ; i<= n ; i++){
        printf("indique as temperaturas" , i+1);


        if(inicio){
        *max= *min = n;
        inicio=0;
      }

        if(pedidos > *max){
        *max=n;
      }else if(pedidos < *min){
        *min = n;
      }
      }
     
    
}