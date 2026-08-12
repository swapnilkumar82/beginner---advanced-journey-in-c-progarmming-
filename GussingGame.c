#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char name[20];
    printf("hello this a number gussing game enter your name:");
    scanf("%s",name);
    printf("hello %s guss a number between 1 to --->10:",name);
    int userNumber ;
    scanf("%d",&userNumber);
    int number = 10;
    srand(time(NULL));  
    int randomNumber=rand()%number+1;
    if(userNumber==randomNumber)
    {
        printf("%s gusse correct number which is %d.\n",name,randomNumber);
    }
    else
    {
        printf("try again %s !!!!!!! the number is %d\n",name,randomNumber);
    }
    return 0;
}
