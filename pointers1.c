#include <stdio.h>
int main(void){
int y;
char x;
y= 51;
int *s;
s=&y;
printf("s=%d\n",s);
printf("*s=%d\n",*s);
printf("&y=%d\n",&y);
printf("%d\n",sizeof(int));// this give 4 bytes
//so,
printf("%d\n",s+1);
printf("%d\n",sizeof(x));// one byte 
printf("%d\n",s+x);// the answer is different because value x is not define
    return 0;
}