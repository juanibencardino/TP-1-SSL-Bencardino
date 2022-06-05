//Bencardino Juan Ignacio

#include <stdio.h>
#include <ctype.h>

int main() {
   int c;
   printf("Ingrese una frase:\n");
   while (EOF != (c=getchar())) {
      if (isalpha(c)) {
         if (islower(c)) {
            c = toupper(c);
            putchar(c);
         }
         else if (isupper(c) ) {
            c = tolower(c);
            putchar(c);
         }
      } else if (isdigit(c)) {

      } else {
         putchar(c);
      }
   }
   return 0;
}
