#include <stdio.h>
int main(){
    int i=0;
while (i<11)
{
    int k=i;
    while(k>=0)
    {

        printf("%d  ",k);
        k--;
    }
      i++;
      printf("\n");
}
    return 0;
}