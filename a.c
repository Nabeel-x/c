#include <stdio.h>
#include <stdlib.h>

int main(){
    int size,diagonal_sum=0,off_diagonal_sum=0;
    int array[][3] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        diagonal_sum+=array[i][i];
    }
    for(int i=0;i<3;i++){
        off_diagonal_sum+=array[i][3-1-i];
    }
    printf("diagonal sum = %d, off diagonal sum = %d",diagonal_sum,off_diagonal_sum);   
}