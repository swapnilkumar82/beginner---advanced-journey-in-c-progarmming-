#include <stdio.h>
int main(){
int number;
printf("enter your number see how time it takes to reach:");
scanf("%d",&number);

    int i=0;
    while(1)
    {

        printf("%d\n",i);
        if(number==i)
        {
            printf("number found\n");
            break;
        }

            i++;

    }




    return 0;
}