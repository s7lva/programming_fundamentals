#include <stdio.h>
#include <stdbool.h>

int lerinteiro(void);
int numeroPerfeito(int valor);

int main(){
    int valor_utilizador1;
    int resultado;
    int num1;
    int resposta_utilizador=0;
    int resultado2 =0;
    
    printf("indique me o numero a avaliar");
    scanf("%d" ,&num1);


    resultado = numeroPerfeito(num1);
   
    if(resultado){
        printf("o numero é primo");
    }else{
        printf("o numero não é primo");
    }
    
    resultado2 =lerinteiro();
    printf("o numero lido foi metido %d vezes" , resultado2);


    
}
int lerinteiro(void){
    int num2;
    char lixo;
    int contador;
    do{
        printf("indique o numero tem de ser n inteiro positivo");
        scanf("%d", &num2);

        if (num2 <= 0) {
            printf("Erro: O numero tem de ser > 0.\n");
        }
   }while(num2 <=0 );
   
   
   if(num2<=0){
    contador++;
   }
 


    return num2;
}

int numeroPerfeito(int valor){
    int divisores =0;



    for(int i =1 ; i < valor; i++ ){
        if(valor % i == 0){
          divisores += i;
        }
        
    }

    if(divisores == valor){
        return true;
    }else{
        return false; 
    }
}