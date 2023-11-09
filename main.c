#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE*fp = NULL;
  char c;
  
  fp = fopen("sample.txt", "r");
  
  if (fp == NULL) {
         printf("파일을 못 열음\n");
         return 0;
         }
  
  while( (c = fgetc(fp)) != EOF) putchar(c);
  fclose(fp);

  system("PAUSE");	
  return 0;
}


