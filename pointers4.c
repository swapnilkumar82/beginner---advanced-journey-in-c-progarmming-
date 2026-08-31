#include <stdio.h>
int main(){

int a[]={43,50,44,51};
for(int i=0;i<4;i++)
{
printf("%d\n",&a[i]);
printf("%d\n",a+i);
printf("%d\n",a[i]);
printf("%d\n",*(a+i));
}

    return 0;
}