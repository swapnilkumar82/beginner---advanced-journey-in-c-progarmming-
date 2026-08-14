#include <stdio.h>
int main(){
    for(int i=0;i<11;i++)
    {
       // printf("%d",i);

        for(int k=i;k>=0;k--)
        {
            printf("%d    ",k);
        }   
        printf("\n");
    }
    return 0;
}
