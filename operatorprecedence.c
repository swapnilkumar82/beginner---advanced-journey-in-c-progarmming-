#include <stdio.h>
int main(){
	int x,y;
	x=y=10e4;
	printf("the value of the x and y = %i\n",x);
//the value of x=y=10e4
	y/=10;
	printf("The value of the y= %i\n",y);// the value y =10e3
	int z=-y +x;//the value of z=90000 
	printf("The value of the z = %i\n",z); 
	return 0;
}
