#include <stdio.h>
#include <math.h>

float soma(float a , float b);
float divisao(float a , float b);
float multiplicacao(float a , float b);
float divisao(float a, float b);
float raisquadrada(float a , float b);


int main(){


  FILE *file_ptr;
  file_ptr = fopen("valores da resultados_da calculadora.txt", "w");  

   float num1, num2;
   
   printf("indique o primeiro valor");
   scanf("%f" , &num1);

   printf("indique o segundo valor");
   scanf("%f" , &num2);
   
  printf("Resultado da soma é: %.2f\n", soma(num1, num2));
  printf("Resultado da subtração é: %.2f\n" , subtração(num1 , num2));
  printf("Resultado da multiplicação é: %.2f\n" , multiplicacao(num1 , num2));
  printf("Resultado da divisão é: %.2f\n" , divisao(num1 , num2));
  printf("Resultado das raizes quadradas são: [%.2f][%.2f]" , raisquadrada(num1 , num2));

  fprintf(file_ptr , "-------Resultado das contas-------");
  fprintf(file_ptr , "soma: %.2f\n" , soma(num1, num2));
  fprintf(file_ptr , "subtração: %.2f\n" , subtração(num1,num2));
  fprintf(file_ptr , "multiplicação: %.2f\n" , multiplicacao(num1,num2));
  fprintf(file_ptr , "divisão: %.2f\n" , divisao(num1,num2));
  fprintf(file_ptr , "As raizes quadradas são: %.2f\n %.2f\n" , raisquadrada(num1,num2));

  fclose(file_ptr);
   
}

float soma(float a , float b){
  float soma;
  soma = a+b;
  return soma;

}

float subtração(float a , float b){
    float subtração;
    subtração = a+b;
    return subtração;
}

float multiplicacao(float a , float b){
   float multiplicacao;
   multiplicacao = a*b;
   return multiplicacao;
}

float divisao(float a, float b){
    float divisao;
    if(b==0){
        printf("Valor dividido por zero é impossivel");
    }else{
      divisao = a/b;
    }
    
    return divisao;
}

float raisquadrada(float a , float b){
   float raisquadrada;
   raisquadrada = sqrt(a);
   raisquadrada = sqrt(b);
   
   return raisquadrada;

}