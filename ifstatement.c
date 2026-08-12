#include <stdio.h>
#include <stdbool.h>
int main(){
bool pizzaIsHealthyl;
int answer;
printf("Do you think that pizza is health if yes enter 1 not then enter 0 : ");
scanf("%d",&answer);
    if(answer==1)
    {  
        printf("you are a pizza lover dear.\n");
    }
    if(answer==0)
    {
        printf("you are right.\n");
    }

    return 0;
}