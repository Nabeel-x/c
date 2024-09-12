#include <stdio.h>

int main(){
    int vowels=0;
    char string[100];
    printf("Enter a string: ");
    scanf("%s",&string);
    for(int i = 0;string[i] != '\0';i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U'){
            vowels++;
        }
    }
    printf("the number of vowels = %d\n",vowels);
}