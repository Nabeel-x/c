#include <stdio.h>
#include <stdlib.h>

int sum_digits(int val){
    if (val == 0) return 0;
    return val%10 + sum_digits(val/10);
}
int main(int argc,char **argv){
    int value = atoi(argv[1]);
    printf("Value = %d\n",value);
    printf("sum of digits = %d\n",sum_digits(value));
    return 0;
}