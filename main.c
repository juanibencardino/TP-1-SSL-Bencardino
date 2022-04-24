//Bencardino Juan Ignacio

#include <stdio.h>
#include <ctype.h>

int main() {
   int c;
   printf("Ingrese una frase:\n");
   while (EOF != (c=getchar())){
      if (islower(c)){
         c = toupper(c);
      }
      else {
         c = tolower(c);
      }

      if (isdigit(c)){
         c = '\0';
      }
      putchar(c);
   }
   return 0;
}
