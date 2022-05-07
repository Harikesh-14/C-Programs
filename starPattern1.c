#include<stdio.h>
int main(){
    int row, col;
    printf("Enter the number of row: ");
    scanf("%d",&row);
    printf("Enter the number of column: ");
    scanf("%d",&col);
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            printf("* ");
        }printf("\n");
    }
}