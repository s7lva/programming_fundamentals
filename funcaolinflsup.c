#include <stdio.h>


int conversao_em_segundos(int h, int m, int s) {
int seg;
seg = h*3600 + m*60 + s;
return seg;
}

int ler_inteiro(int l_inf , int l_sup) {
   int ret;
   int aux;
    
   if(l_inf > l_sup){
    l_sup = aux;
    l_sup = l_inf;
    l_inf = aux;
   }

   do{
     printf("insira entre [%d][%d]", l_inf , l_sup);
     scanf("%d" , &ret);
   }while(ret<l_inf || ret>l_sup);
}


int main(){
    int hora, min, seg;

    printf("Horas:"); hora = ler_inteiro (0, 23);
    printf("Minutos:");min = ler_inteiro (0, 59);
    printf("Segundos:");seg = ler_inteiro (0, 59);

    printf("Hora: %d\n", hora);
    printf("Min: %d\n", min);
    printf("Seg: %d\n", seg);
}
