#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char *nome;
    int *niveis;
    int nivel_atual;
    float taxa_acertos;

}Guerreiro ;


int main(){
  //variavel global da struct;
  Guerreiro jogador;
   int encontrado =0;
  
    jogador.nome = (char*) malloc(20*sizeof(char));
    jogador.niveis = (int*) calloc(8 , sizeof(char));

    
   

    if(jogador.nome == NULL){
      printf("o sistema operativo negou a memoria ao malloc");
    }

    if(jogador.niveis == NULL){
      printf("o sistema operativo negou a memoria ao calloc");
    }

    printf("Indique o nome do jogador");
    scanf("%s" , jogador.nome);
    
    
    printf("indique o nivel atual");
    scanf("%d" , &jogador.nivel_atual);

    for(int i =0 ; i< 8 ; i++){
      printf("indique os niveis existentes" , i+1);
      scanf("%d" , &jogador.niveis[i]);
        if(jogador.nivel_atual != jogador.niveis[i]){
            encontrado =1;
            break;
        }
    }

    if(encontrado ==0){
      printf("o jogador ainda n passou por este nivel");
    }else{
      printf("o jogador já passou neste nivel");
    }


    if(jogador.nivel_atual != *jogador.niveis){
      printf("esse valor n existe");
      return 1;
    }

    printf("indique a taxa de acerto");
    scanf("%f" , &jogador.taxa_acertos);

    printf("-----dados do jogador----- \n");
    printf(" nome: %s\n" , jogador.nome);
    printf(" nivel_atual:%d\n " , jogador.nivel_atual);
    printf("taxa de acertos: %.2f\n" , jogador.taxa_acertos);
    


    free(jogador.nome);
    free(jogador.niveis);


    return 0;
}

