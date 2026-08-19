#include <stdio.h>
int factorial(int number){
    int factorials=1;
for(int i=number;i>1;i--)
{
    factorials*=i;
}
   return factorials;
}
void io()
{
    printf("Enter the whose factorial you when to know :");
}
void outputfactorial(int number)
{
printf("THE Factorial is: %d\n",factorial(number));
}
int main(){
int number;
io();
scanf("%d",&number);
outputfactorial(number);
    return 0;
}