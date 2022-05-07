#include <stdio.h>
int main()
{
   int num1, num2, temp, i, j;
   printf("Enter two range(input integer numbers only):");
   scanf("%d %d", &num1, &num2);
   for(i=num1+1; i<num2; ++i){
      temp=0;
      for(j=2; j<=i/2; ++j){
         if(i%j==0){
            temp=1;
            break;
         }
      }
      if(temp==0){
         printf("%d\n",i);
      }
  }
  return 0;
}