#include<stdio.h>
void tempCompare(float temp){
    if(temp>27 && temp<=40){
        printf("Not too hot");
    } else if(temp>40 && temp<=54){
        printf("Hot");
    } else if(temp>54){
        printf("Very hot");
    } else if(temp>12 && temp<=27){
        printf("Not too cold");
    } else if(temp>0 && temp<=12){
        printf("Cold");
    } else{
        printf("Very Cold");
    }
}
int main(){
    int temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temp);
    tempCompare(temp);
    return 0;
}