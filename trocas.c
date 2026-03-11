#include <stdio.h>

void trocaporvalor(int a , int b);
void trocaporreferencia(int*a , int*b);

int main(){
    int x , y;

    printf("indique o valor de a");
    scanf("%d" , &x);

    printf("indique o valor de b");
    scanf("%d" , &y);

    trocaporvalor(x,y);
    printf("Os valores depois da troca por valores ficam: x= %2f y= %2f" , x,y);

    // Passamos o endereço (&) das variáveis
    trocaporreferencia(&x , &y);
    printf("Os valores depois da troca por referencia ficam: x= %2f y= %2f" , x,y);




}

// Tenta trocar, mas só mexe nas cópias locais
void trocaporvalor(int a , int b){
    int temp =a;
    b=a;
    b= temp;
    printf("  Dentro de trocaValor: a = %d, b = %d\n", a, b);
}

// Vai até o endereço de memória e troca os originais
void trocaporreferencia(int*a , int*b){
    int temp = *a;
    *a=*b;
    *b = temp;
}