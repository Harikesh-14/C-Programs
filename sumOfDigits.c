#include<stdio.h>
int digitSum(int num){
    int current_digit, temp=num, sum=0;
    while(num>0){
        current_digit = num % 10;
        sum = sum + current_digit;
        num = num / 10;
    } printf("Sum of digit of %d is %d", num, sum);
    return sum;
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    digitSum(number);
}