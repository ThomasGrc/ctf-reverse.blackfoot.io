#include <stdio.h>

int main(int ac, char **av) {

    char *ptr = av[1];
    char *param2 = "MasKerad";
    char *param3 = "e133742A";
    
    int var1 = 0;
    
    while (*ptr != 0) {
    	//printf("%c", *(char *)(ptr + var1));
    	printf("%c %c\n", *(char *)(param3 + var1),  *(char *)(param2 + var1));
    	var1++;
    	*param2++;
    	*param3++;
    	*ptr++;
   
    }

    return 0;
}
