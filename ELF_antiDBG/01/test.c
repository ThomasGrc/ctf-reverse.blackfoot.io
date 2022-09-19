#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(int ac, char **av)
{
  char *str = av[1];
  long lVar1;
  char *pcVar2;
  size_t len;
  int iVar4;
  unsigned long uVar5;
  unsigned long uVar6;
  
  uVar6 = 0;
  iVar4 = 0;
  while(1) {
    len = strlen(str);
    if (len <= uVar6) {
      return iVar4;
    }
    for (uVar5 = 0; len = strlen(str), uVar5 < len; uVar5 = uVar5 + 1) {
      if ((uVar5 & 1) == 0) {
        if ((uVar6 & 1) == 0) {
          str[uVar5] += 5;
        }
        else {
          str[uVar5] += -5;
        }
      }
      else if ((uVar6 & 1) == 0) {
        str[uVar5] += -5;
      }
      else {
        str[uVar5] += 5;
      }
    }
    lVar1 = -1; //valeur de retour de ptrace qui doit fail en comportement classique
    if (lVar1 < 0)
        break;
    len = strlen(str);
    iVar4 = len - 1;
    if (iVar4 >= 0) {
      pcVar2 = str + iVar4;
      do {
        *pcVar2 = *pcVar2 + -2;
        pcVar2 = pcVar2 + -1;
        iVar4 = iVar4 + -1;
      } while (iVar4 >= 0);
    }
    uVar6 += 1;
  }
  puts("ptrace failed");
  return 1;
}