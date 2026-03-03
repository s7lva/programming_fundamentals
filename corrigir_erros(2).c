#include <stdio.h>

int main(){


float oper1,oper2;
int op;

printf("\nDigite o primeiro operando: ");
scanf("%f", &oper1);
printf("Digite o segundo operando: ");
scanf("%f", &oper2);
fflush(stdin);
printf("Escolha um dos seguintes operadores: 1,2,3,4");
scanf("%d", &op);
// Calcula e mostra o resultado
switch (op) {
      case 1:
printf("\n %.2f + %.2f = %.2f\n", oper1, oper2, oper1+oper2);
break;

      case 2:
printf("\n %.2f - %.2f = %.2f\n", oper1, oper2, oper1-oper2);
break;

      case 3:
printf("\n %.2f * %.2f = %.2f\n", oper1, oper2, oper1*oper2);
break;

      case 4:
if (!oper2) printf("\nDivisor igual a zero!");
else printf("\n %2.f / %.2f = %.2f",oper1, oper2, oper1/oper2);
break;

      default:
printf("\nErro na escolha do operador\n");


}
return 0;
}