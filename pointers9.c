#include <stdio.h>
int main(){
int arr[2][5]={
{43,10,44,42,50},
{44,10,42,43,51}
};
int (*p)[5]=arr;
printf("%d,",*(*p));
printf("%d\n",*(*(p+1)));
printf("%d,",*(*p+1));
printf("%d\n",*(*(p+1)+1));
printf("%d,",p[0][2]);
printf("%d\n",p[1][2]);
printf("%d,",p[0][3]);
printf("%d\n",p[1][3]);
printf("%d,%d\n",arr[0][4],arr[1][4]);
    return 0;
}