#include <stdio.h>
#include <unistd.h>


int main(int ac, char **av)
{
  char cVar1 = av[1][0];
  unsigned int uVar2;
  long lVar3;
  char *arg1;
  char *arg1tmp;
  
  if (ac == 2) {
    arg1 = av[1];
    lVar3 = -1;
    arg1tmp = arg1;
    while (cVar1 != '\0') {
      if (lVar3 == 0)
        break;
      lVar3 = lVar3 - 1;
      cVar1 = *arg1tmp;
      arg1tmp += 1;
    }
    if (lVar3 == -22) {
      if (*arg1 != '\0') {
        if (*arg1 != 'w') {
          printf("1 No, %s is not correct.\n", av[1]);
          return 1;
        }
        arg1tmp = "4Yb1hngnvQYb37M2FU";
        cVar1 = 'v';
        while (cVar1 != '\0') {
          arg1 += 1;
          if (*arg1 == '\0')
            break;

          printf("cVar1 = %c\narg1 = %s\n", cVar1, arg1);

          if (cVar1 - 1 != (int)*arg1)
            break;
          cVar1 = *arg1tmp;
          arg1tmp += 1;
        }
      }
      printf("Yes, %s is correct!\n", av[1]);
      uVar2 = 0;
    }
    else {
      printf("2 No, %s is not correct.\n", av[1]);
      uVar2 = 0;
    }
  }
  else {
    puts("You should give one argument.");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
