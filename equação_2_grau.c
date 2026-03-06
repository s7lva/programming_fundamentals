#include <stdio.h>
#include <math.h>

int main(){

float a;
float b;
float c;
float equacao2grauincompleta , equacao2graucompleta , x1,x2;
float delta;
   
printf("indique o valor de a");
scanf("%f" , &a);

printf("indique o valor de b");
scanf("%f" , &b);

printf("indique o valor de c");
scanf("%f" , &c);


if(a==0){
     printf("deixou de ser uma equação de 2 grau");
}else if (b==0 && a==1){
     x1 = sqrt(c);
     x2 = -x1;
     printf("O x1 da: %.2f e o x2 da %.2f " , x1 ,x2);
}else if(b==0){
     x1 = sqrt(-c/a);
     x2 = -x1;
     printf("O x1 da: %.2f e o x2 da %.2f " , x1 ,x2);  
}else if (c==0 && a==1){
    x1= sqrt(a);
    x2 = -x1;
    printf("O x1 da: %.2f e o x2 da %.2f " , x1 ,x2);  
}else if(c==0){
    x1= sqrt(-b/a);
    x2 = -x1;
    printf("O x1 da: %.2f e o x2 da %.2f " , x1 ,x2);  
}else{

delta = pow(b , 2) - (4 * a * c);
if(delta >0){
  float raizDelta = sqrt(delta);
   x1 =(-b +sqrt(delta)) / (2*a);
   x2= (-b -sqrt(delta)) / (2*a);
   printf("Os valores de x1 é : %.2f\n e de x2 é: %.2f\n", x1 ,x2);
}else{
    if(delta==0){
     x1=0;
     x2 = -b/2*a;
     printf("Os valores de x1=0 e de x2 é : %.2f\n ",x2);
    }else{

        printf("delta negativo erro matematico");
    }
}
return 0;

}
}
