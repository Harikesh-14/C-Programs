#include<stdio.h>
#include<math.h>
int main(){
    int num, current_digit, sum=0, tempo; //Declare and initializing the variables
    printf("Enter a number: ");
    scanf("%d", &num);
    tempo = num; //This line is important. Never miss this
    // Creating the main algorithm of the code
    while(num>0){
        current_digit = num % 10;
        sum = sum + pow(current_digit, 3);
        num = num / 10;
    } 
    // Creating conditions for checking, whether the number is armstrong or not
    if(tempo = sum){
        printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}