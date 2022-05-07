#include<stdio.h>
int naturalNumCheck(int num){
    if( num>=1){
        return 1;
    } else{
        return 0;
    }
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(naturalNumCheck(number)){
        printf("%d is a natural number", number);
    }else{
        printf("%d is a natural number", number);
    }
    return 0;
}