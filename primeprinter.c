#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number;
	printf("enter the number upto which you want to the prime number:");
	scanf("%d",&number);
    bool IsPrime = true;

	printf("The prime numbers  are:");

    for(int i = number; i >= 2; i--)
    {
        IsPrime = true;

        for(int f = i - 1; f >= 2; f--)
        {
            if(i % f == 0)
            {
                IsPrime = false;
                break;
            }
        }

        if(IsPrime)
        {
            printf("%d ", i);
        }
    }
            printf("\n");
    return 0;
}
