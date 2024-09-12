#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car{
    char brand[50];
    char model[50];    
};

int main(){
    struct car car1;
    printf("Enter brand and model: ");
    scanf("%s%s",car1.brand,car1.model);
    printf("brand = %s\nmodel = %s\n",car1.brand,car1.model);

}