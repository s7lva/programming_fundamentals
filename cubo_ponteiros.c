#include <stdio.h>



int main(){

  int x=3;
  elevaraocubo(&x);
  printf("O valor elevado ao cubo da: %d\n" , x);

}
//passagem por referencia o valor é guardado no endereço de memoria.
void elevaraocubo(int*n){

    *n =(*n)*(*n)*(*n);
}