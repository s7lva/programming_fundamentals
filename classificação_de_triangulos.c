#include <stdio.h>

int main(){

float a ,b,c;
float lado1,lado2,lado3 ,triangulo;

printf("Da me o valor do 1 lado");
scanf("%f" , &lado1);

printf("Da me o valor do 2 lado");
scanf("%f" , &lado2);

printf("Da me o valor do 3 lado");
scanf("%f" , &lado3);


if(lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2){
    printf("é um triangulo");
}else{
    printf("não é um triangulo");
}

if(lado1 == lado2 ==lado3){
    printf("Triangulo equilatro");
}else if (lado2 == lado3 && lado1 != lado2){
    printf("Triangulo esosteles");
}else if(lado1 != lado2 && lado2 != lado3 && lado3 != lado1){
    printf("Triangulo escaleno");
}

return 0;

}