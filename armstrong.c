#include <stdio.h>

int main(){
    int limit;
    printf("Enter limit: ");
    scanf("%d",&limit);
    int sum,temp;
    for(int i = 0;i < limit;i++){
        sum = 0;
        temp = i;//153
        while(temp>0){
            sum = sum + (temp%10)*(temp%10)*(temp%10);
            temp/=10;
        }
        if(i == sum){
            printf("%d is a armstrong number\n",i);
        }
    }
}