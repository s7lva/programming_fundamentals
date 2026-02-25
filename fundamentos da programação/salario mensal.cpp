#include<stdio.h>

int main(){
	
   float Nh;
   float Ch;
   float Sb;
   
   float salario;
   
    printf("introduza o numero de horas ");
    scanf("%f", &Nh);
    
    printf("introduza o custo de horas");
    scanf("%f" , &Ch);
    
    printf("Introduza o salario base");
    scanf("%f" , &Sb);
    
    salario = Nh*Ch+Sb;
    
    printf("O valor do salario e : %.2f\n", salario);
    
    return 0;
	
}
