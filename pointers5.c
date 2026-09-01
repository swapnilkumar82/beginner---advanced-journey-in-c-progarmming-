#include <stdio.h>
void SumOfArray(int*A,int size)
{
int sum=0;
for(int i=0;i<size;i++)
{
sum+=A[i];
}
printf("%d\n",sum);
};
int main(){
int A[]={1,2,3,4,5};
int size=sizeof(A)/sizeof(A[0]);
SumOfArray(A,size);


    return 0;
}