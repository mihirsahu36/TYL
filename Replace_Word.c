#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void replaceWord(char *text, char *oldWord, char *newWord) {
   int i = 0, count = 0;
   int len1 = strlen(newWord);
   int len2 = strlen(oldWord);
   for (i = 0; text[i] != '\0'; i++) {
      if (str(&text[i], oldWord) == &text[i]) {
         count++;
         i += len2 - 1;
      }
   }
   char *newString = (char *)malloc(i + count * (len1 - len2) + 1);
   i = 0;
   while (*text) {
      if (strstr(text, oldWord) == text) {
         strcpy(&newString[i], newWord);
         i += len1;
         text += len2;
      }
      else
      newString[i++] = *text++;
   }
   printf("New String: %s", newString);
}
int main() {
   char str[] = "26 JANUARY IS CELEBRATED AS THE REPUBLIC DAY OF INDIA";
   char a[] = "26";
   char b[] = "15";
   char c[] = "JANUARY";
   char d[] = "AUGUST";
   char e[] = "REPUBLIC";
   char f[] = "INDEPENDENCE";
   char *result = NULL;
   printf("Original string: %s", str);
   replaceWordInText(str, a, b);
   replaceWordInText(str, c, d);
   replaceWordInText(str, e, f);
   
   return 0;
}
