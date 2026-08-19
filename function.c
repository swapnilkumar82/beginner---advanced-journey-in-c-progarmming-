#include <stdio.h>
int factorial(int number){
    int factorials=1;
for(int i=number;i>1;i--)
{
    factorials*=i;
}
   return factorials;
}
int main(){
printf("Enter the whose factorial you when to know :");
int number;
scanf("%d",&number);
int result=factorial(number);
printf("The factorial = %lld\n",result);
    return 0;
}