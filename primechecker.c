#include <stdio.h>
#include <stdbool.h>
int main(){
    int input;
	printf("enter the number you want to check as a prime or not :");
	scanf("%d",&input);
    int IsPrime=true;
    for(int i=input-1;i>1;i--)
    {
        if(input % i==0)
        {
            IsPrime = false;
        }
    }
    if(IsPrime)
    {

        printf("This number %d is prime .\n",input);

    } 
    else
    {

        printf("This number  %d is not prime .\n",input);

    }
    
    return 0;
}
