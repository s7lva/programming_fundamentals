#include <stdio.h>
#include <math.h>

typedef struct fracao1{
    int num;
    int den;
} fracao_t;

typedef struct fracao2{
    int num;
    int den;
} fracao_t;

int main(){
   fracao_t f1;
   fracao_t f2;
   fracao_t res;

   printf("indique o valor do numerador (fração1)");
   scanf("%d" , &f1.num);

   printf("indique o valor do denominador (fração2)");
   scanf("%d" , &f1.den);

   printf("indique o valor do numerador (fração1)");
   scanf("%d" , &f2.num);

   printf("indique o valor do denominador (fração2)");
   scanf("%d" , &f2.den);


   printf("-----Resultados das contas-----");
   simplificar_direto(&f1);
   printf("fração simplificada: %d/%d\n" , f1.num , f1.den);

   simplificar_direto(&f2); 
   printf("fração simplificada: %d/%d\n" , f2.num , f2.den);

   multiplicar_fracao(&f1 , &f2);
   printf("frações multiplicadas : %d/%d" , f1.num , f1.den);

   dividir_fracao(&f1 , &f2);
   printf("frações divididas: %d/%d" , f1.num , f1.den);

   somar_fracao(&f1 , &f2 , &res);
   printf("frações somadas : %d/%d " , f1.num , f1.den);


   return 0;
   
}

void simplificar_fracao(fracao_t  *f1 , fracao_t *f2){
   if(f1 -> num %2 == 0 && f1-> den %2 == 0){
      f1-> num /2 ;
      f1->den /2;
      printf("fração simplificada ao maximo");
   }
   if(f2 -> num %2 == 0 && f2-> den %2 == 0){
      f2-> num /2 ;
      f2->den /2;
      printf("fração simplificada ao maximo");
   }
}

void multiplicar_fracao( fracao_t *f1 , fracao_t *f2){
    f1->num = f1->num * f2->num;
    f1->den = f1->den * f2->den;
}

void dividir_fracao (fracao_t *f1 , fracao_t *f2){
    int temp = f2->num;
    f2->num = f2->den;
    f2->den = temp;

    f1->num = f1->num * f2->num;
    f1->den = f1->den * f2->den;

}

void somar_fracao(fracao_t *f1 , fracao_t *f2 , fracao_t *res){
    res->num = (f1->num * f2->den) + (f2->num * f1->den);
    res->den = f1->den * f2->den;
} 



