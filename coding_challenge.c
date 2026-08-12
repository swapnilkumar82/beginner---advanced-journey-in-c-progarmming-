/* create a program that takes two doubles as input,
and calculate the hypotenuse of the right angle triangle and output it*/
#include <stdio.h>
#include <math.h>

int main() {
    double a;
    double b;

    printf("Enter your base: ");
    scanf("%lf", &a);

    printf("Enter the perpendicular: ");
    scanf("%lf", &b);

    double c = sqrt((a * a) + (b* b));

    printf("Your hypotenuse is:%f\n", c);

    return 0;
}


/* if you are using this math lib in the windows or mac then it wil but in the linux 
use : gcc filename.c -o filename-lm(here lm means link lib to math 
and then : ./filename   */

