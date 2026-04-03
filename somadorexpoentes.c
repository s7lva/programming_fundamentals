#include <stdio.h>
#include <math.h>

int main() {
    double x, soma = 1.0; // O primeiro termo da série é 1
    double denominador = 2.0;

    printf("Indique o valor de x: ");
    scanf("%lf", &x); // Usamos %lf para double

    for (int i = 1; i <= 15; i++) {
        // O expoente é sempre o dobro da volta do ciclo
        double exp = 2.0 * i; 

        // Calculamos o valor do termo atual (ex: x^2 / 2)
        double valor_termo = pow(x, exp) / exp;

        if (i % 2 != 0) {
            // Se i for 1, 3, 5... subtraímos (conforme a série: 1 - x^2/2 + x^4/4)
            soma -= valor_termo;
        } else {
            // Se i for 2, 4, 6... somamos
            soma += valor_termo;
        }

        // O denominador aqui é igual ao expoente, então nem precisavas
        // de aumentar o denominador à parte, mas se quiseres:
        // denominador += 2.0; 
    }

    printf("O resultado da serie e: %.4lf\n", soma);
    return 0;
}