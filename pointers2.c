#include <stdio.h>
int main(){
int x=3;
int *p;
p=&x;
int **pp;
pp=&p;
printf("*p=%d\n",*p);
printf("%d\n",p);
printf("**pp=%d\n",**pp);
printf("%d\n",pp);
int ***ppp=&pp;
***ppp=9;
printf("***ppp=%d\n",***ppp);
printf("%d\n",ppp);
    return 0;
}