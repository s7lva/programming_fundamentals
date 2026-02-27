#include <stdio.h>

int main(){

    int conversor;
    float celsius;
    float kelvin;
    float farenheit;


    printf("indique a temperatura em celsius");
    scanf("%f", celsius);


    switch (conversor){
        case 1:
        kelvin= celsius +273;
        printf("A temperatura em kelvins é: %.2f\n" , kelvin);
        break;
        
        case 2:
        farenheit = (9/5)*celsius +32; 
        printf("A temperatura em farenheit é: %.2f\n" , farenheit);
        
    }

    return 0;

}