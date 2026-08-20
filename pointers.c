#include <stdio.h>
int main(){

int y =51;
int *p=&y;
printf("y=%d\n",y);
printf("y=%d\n",*p);
*p=50;
printf("y=%d\n",y);
printf("y=%d\n",*p);
y++;
(*p)++;
printf("y=%d\n",y);
printf("y=%d\n",*p);
    return 0;
}
