unsigned long strlen(char *str) {
    unsigned long i = 0;
    while (str[i] != 0) {
        i++;
    }
    return i;

}