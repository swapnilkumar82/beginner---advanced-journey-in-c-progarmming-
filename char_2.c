#include <stdio.h>
int main(){
	char ASCII;
	printf("enter your character:");
	scanf("%c",&ASCII);
	printf("your character no. is : %i\n",ASCII);


	int intger;
	printf("enter the intger to see it character value:");
	scanf("%i",&intger);
	printf("your character is : %c\n",intger);
	
	//math in ASCII
	char math= 'A' +  '\t';
	printf("A(65) + \\t(11) = %c(%d)\n",math,math); 



	return 0;
}
