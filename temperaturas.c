#include <stdio.h>

int main(){

    char conversor;
    float celsius;
    float kelvin;
    float farenheit;


    printf("indique a temperatura em celsius");
    scanf("%f", &celsius);

    printf("Escolha um do seguintes operadores: k,K,f,K");
    fflush(stdin);
    scanf("%c", &conversor);

    switch (conversor){
        case 'k':
        case 'K':
        kelvin = celsius + 273;
        printf("A temperatura em kelvins é: %.2f\n" , kelvin);
        break;

        case 'f':
        case 'F':
        farenheit = (9/5)*celsius +32; 
        printf("A temperatura em farenheit é: %.2f\n" , farenheit);
        break;

        default:
        printf("Opcao invalida.");
    }

    return 0;

}
