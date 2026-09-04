#include <stdio.h>
int main(){
int arr[3]={50,44,43};
int *p=arr;
printf("%d\n",&arr);
printf("%d\n",&*(p+1));
printf("%d\n",&p[2]);
printf("%d\n",arr[0]);
printf("%d\n",*(p+1));
printf("%d\n",p[2]);
    return 0;
}