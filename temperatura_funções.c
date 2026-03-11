#include <stdio.h>

float convertercelsiusFahrenheit(float c);
float converterFahrenheit(float f);
float converterfahrenheitcelsius(float c);

int main(void){

   FILE *file_ptr;
   file_ptr = fopen("valores da resultados_temperaturas.txt", "w"); 
   if (file_ptr == NULL) {
       perror("Error opening file");
       return 1;
   }

   float kelvin;
   float fahrenheit;
   float Celsius;
   
   
   
   printf("Indique a temperatura em Celsius");
    if (scanf("%f", &Celsius) != 1) {          /* basic input check */
        fprintf(stderr, "Entrada inválida\n");
        fclose(file_ptr);
        return 1;
    }


   int fahrenheit = convertercelsiusFahrenheit(Celsius);
   printf("A temperatura em Fahrenheit é: %.2f°F\n", fahrenheit);
   int kelvin = converterfahrenheitcelsius(fahrenheit);
   printf("A temperatura em celsius é : %.2fc\n" , kelvin);

   fprintf(file_ptr , "-----VALORES TEMPERATURA-----");
   fprintf(file_ptr,"Entrada: (celcius) %.2f\n" , fahrenheit);
   fprintf(file_ptr,"Saida: (Fahrenheit) %.2f\n" , Celsius );
   fprintf(file_ptr , "Saida: (kelvin) %2f\n" , kelvin);

   fclose(file_ptr);
   printf("\nOs resultados foram guardados em 'resultados_temperaturas.txt'.\n");

   return 0;

}

float convertercelsiusFahrenheit(float c){
   return (c*1.8) +32;
}

float converterfahrenheitcelsius(float f){
   return (f-3.2)/1.8;
}

float converterFahrenheit(float f){
    float c = converterfahrenheitcelsius(f);
    return c+ 273.15;

}

