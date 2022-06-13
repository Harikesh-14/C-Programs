#include<stdio.h>
int factorial(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact * i;
    }
    return fact;
}
int sumofdigit(int facto){
    int curr_digit, sum=0;
    while(facto>0){
        curr_digit = facto % 10;
        sum = sum + curr_digit;
        facto = facto / 10;
    }
    return sum;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d", sumofdigit(factorial(num)));
    return 0;
}