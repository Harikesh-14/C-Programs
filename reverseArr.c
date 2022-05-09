#include<stdio.h>
int main(){
    int index;
    printf("Enter the size of array: ");
    scanf("%d", &index);
    int arr[index];
    for(int i=0; i<index; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=index-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}