#include <stdio.h>
int main(){
	int money = 100;
	int bill =25;
	int moneyLeft= money - bill; //normal 
        int ifINotPayBill= moneyLeft - -bill;//this an exampleof unarymines
	printf("%i\n",ifINotPayBill);
	return 0;
}
