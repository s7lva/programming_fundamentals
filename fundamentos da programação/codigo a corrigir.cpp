#include <stdio.h>
#include <stdlib.h>

int main() {
int kms;
float custolitro, cons100 , valor ;

printf("Quantos Kilometros vais percorrer?");
scanf("%d", &kms);

printf("Indica o preco do litro do combustivel: ");
scanf("%f", &custolitro);

printf("Indica o consumo aos 100: ");
scanf("%f", &cons100);

// Determina o custo do combustível
 valor = cons100*kms/100*custolitro;
printf("O custo do combustivel = %f" , valor);

return 0;
}
