#define _USE_MATH_DEFINES 
#include <math.h>

#include <stdio.h>
int main() {
    int raio;
    

    printf("Indique o valor do raio: ");
    scanf("%d", &raio);

    
    double area = M_PI * pow(raio, 2);
    double volume = (4.0/3.0)* M_PI * pow(raio, 3);
    printf("Area do circulo: %.2f\n", area);
    printf("Volume do circulo: %.2f\n", volume);

    return 0;
    
    
    
}








