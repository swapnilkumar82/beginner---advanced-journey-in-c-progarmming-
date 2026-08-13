#include <stdio.h>
int main(){
int cost=25;
int money=200;

money>cost? printf("you can afford it\n"):printf("you can not afford this you need %d more...\n", cost-money);

    return 0;
}