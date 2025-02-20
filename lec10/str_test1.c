#include <stdio.h>
#define SIZE 20
int main(){
    char input[SIZE];
    int var1 = 0, var2=0;
    char des[SIZE];

    fgets(input, SIZE, stdin);
    int rc  =  sscanf(input, "%d%d%s", &var1, &var2, des);
    printf("%s\n", input);
    printf("var1: %d\n", var1);
    printf("vars2: %d\n", var2);
    printf("des: %s\n", des);
    printf("rc: %d\n", rc);
}

