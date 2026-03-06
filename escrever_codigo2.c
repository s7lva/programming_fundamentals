#include <stdio.h>

int main() {
   FILE *file_ptr;
   
   // Open file in write mode
   file_ptr = fopen("output.txt", "w"); 
   if (file_ptr == NULL) {
       printf("Error opening file!");
       return 1;
   }
   fprintf(file_ptr, "Hello, World!\n");
   
   // Close the file
   fclose(file_ptr); 
   return 0;
}