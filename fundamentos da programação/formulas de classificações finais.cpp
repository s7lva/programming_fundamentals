#include<stdio.h>
#include<math.h>


int main(){
	
	int MT1 , MT2 , MT3;
	float T1 , T2;
	
	float classif_float;
	int classif_final;
	
	int AulasAssistidas = 10;
	int AulasDadas=13;
		
	printf("Introduza o MT1");
	scanf("%d", &MT1);
	printf("Introduza o MT2");
	scanf("%d", &MT2);
	printf("Introduza o MT3");
	scanf("%d", &MT3);
	
	printf("Introduza o primeiro trabalho");
	scanf("%f" , &T1);
	printf("Introduza o segundo trabalho");
	scanf("%f" , &T2);
	
	classif_float = (MT1 + MT2 + MT3)/3.0 *0.5 
	
	+(T1 *0.4 + T2*0.6)*0.4 
	
	+20.0*AulasAssistidas/AulasDadas *0.1;
	

    
    classif_final = (int)round(classif_float);
    
    printf("A classificação final (arredondada) é: %d\n", classif_final);
	
}

	
	
	 	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

