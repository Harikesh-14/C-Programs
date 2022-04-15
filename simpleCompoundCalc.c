#include<stdio.h>
#include<math.h>
int main(){
    char scb;
    float principle, rate, siminterest, compinterest;
    int time;
    printf("Enter 's' for Simple Interest, 'c' for Compound Interest and 'b' for both Simple Interest and Compound Interest: ");
    scanf("%c",&scb);
    if(scb == 's'){
        printf("Enter Principle Amount, Rate per Annum and Time: ");
        scanf ("%f %f %d", &principle, &rate, &time);
        siminterest = (principle * rate * time)/100.0;
        printf("Simple Interest = %.2f", siminterest);
    } else if(scb == 'c'){
        printf("Enter Principle Amount, Rate per Annum and Time: ");
        scanf ("%f %f %d", &principle, &rate, &time);
        compinterest = principle* (pow((1 + rate / 100), time));
        printf("Compound Interest = %.2f", compinterest);
    } else if (scb == 'b'){
        printf("Enter Principle Amount, Rate per Annum and Time: ");
        scanf ("%f %f %d", &principle, &rate, &time);
        siminterest = (principle * rate * time)/100.0;
        compinterest = principle* (pow((1 + rate / 100), time));
        printf("Simple Interest = %.2f\n", siminterest);
        printf("Compound Interest = %.2f", compinterest);
    } else{
        printf("Invalid Operation");
    }
    return 0;
}