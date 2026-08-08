#include <stdio.h>
int main(){
printf("enter your number to see in the normal and coomputer and scientific term:");
double num;
scanf("%lf",&num);
printf("your number in normal: %f\n In the scientific:%e\n In the computer :%g\n",num,num,num);
return 0;
}
