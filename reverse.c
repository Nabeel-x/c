#include <stdio.h>
#include <stdlib.h>
//function to reverse and print the digits of an integer recursively
void reverse(int val){
    if(val == 0) return;
    printf("%d",val%10);
    reverse(val/10);
}
//using command line to input instead of standard input/output
int main(int argc,char **argv){
    int value = atoi(argv[1]);
    printf("value = %d\n",value);
    reverse(value);
}