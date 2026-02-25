#include<stdio.h>

int main(){
	float x;
	float m;
	float b;
	float y1;
	float y2 , y3;
	
	printf("Introduza o x");
	scanf("%f", &x);

    y1= -x +5;
    y2 = 1.0/2.0*x +2;
    
	printf("Introduza o m");
    scanf("%f" , &m);
    
    printf("Introduza o b ");
    scanf("%f" , &b);
    
    y3= m*x+b;
    
    printf("Os resultados do y1 y2 e y3 são: [%.2f][%.2f][%.2f]\n" , y1 , y2 , y3);
    
    
    return 0;
    
}
