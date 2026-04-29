#include <stdio.h>
#include <math.h>

struct ponto{
    int x;
    int y;

};

struct ponto ler_ponto(){

    //struct ponto p = (0,0)
    struct ponto p;

    printf("indique o valor do x e o valor do y");
    scanf("%d %d" , &p.x , &p.y);

    return p;
}

void imprime_ponto(struct ponto p) {
    printf(("%d %d") , p.x , p.y);

}

float distanciaentrepontos(struct ponto p1 , struct ponto p2){
      
    float distancia =0;
    
    distancia = sqrt(pow(p2.x - p1.x , 2) + pow(p2.y - p2.x , 2));

    return distancia;
}

int main(){

    struct ponto p1;
    struct ponto p2;
    
    p1= ler_ponto();
    p2=ler_ponto();



    return 0;

}