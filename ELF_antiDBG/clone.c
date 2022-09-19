#include <string.h>

int main(int ac, char **av)
{
  char *ptr;
  char c;
  char *strInput;
  unsigned long inputLen;
  unsigned long i = 0;
  char res[100];
  
  while(1) {
    strInput = av[1];
    inputLen = strlen(av[1]);
    if (i == inputLen)
        break;
    if ((i & 1) == 0) {
      ptr = strInput + i;
      *ptr = *ptr - 'T';
    }
    else {
      ptr = strInput + i;
      *ptr = *ptr + '*';
    }
    i += 1;
  }
  i = 0;
  strInput = NULL;
  while(1) {
    strInput = av[1];
    inputLen = strlen(av[1]);
    if (i == inputLen)
        break;
    if (*(strInput + i) == 127) {
      *(strInput + i) = 'U';
    }
    c = av[1][i];
    if (c < '!') {
      av[1][i] = c + 'T';
      
    }
    res[i] = c;
    i += 1;
  }
  printf("%s\n", res);
  return 0; // return void in origin code
}