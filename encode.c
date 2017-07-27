#include<stdio.h>
#include<conio.h>

char* encode(char* str) {
   int a = 0;

   while (str[a] != '\0') {
      str[a] = str[a] - 30;  // Subtract 30 From Charcter
      a++;
   }
   return (str);
}

void main() {

   char *str;

   printf("\nEnter the String to be Encode : ");
   gets(str);

   str = encode(str);
   printf("\nEncoded String : %s", str);

   getch();
}
