#include<stdio.h>

int main() {
FILE *file;
char ch;
char filename[100];
int lines = 0, words = 0, characters = 0;
int inword = 0;
printf("enter filename : ");
scanf("%s",filename);

file = fopen(filename,"r");

if (file == NULL) {
 printf("Couldn't open");
 return 1;
 }
while ((ch = fgetc(file)) != EOF) {
 characters++ ;
 if (ch == '\n')
  lines++ ;
 if (ch == ' ' || ch == '\t' || ch == '\n')
  inword = 0;
 else if (inword == 0)
  inword = 1;
  words++ ;
  }

fclose(file);
printf("No. of lines: %d\n",lines);
printf("No. of words: %d\n",words);
printf("No. of characters: %d\n",characters);

return 0;
}
