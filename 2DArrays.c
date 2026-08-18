#include <stdio.h>
#define columb 3
int main(){
int grades[][columb]={
{88,86,83},
{47,46,42}
};
printf("%d\n",grades[1][1]);//46 output  
for(int i=0;i<2;i++)
{
    for(int y=0;y<3;y++)
    {
        printf("%d ",grades[i][y]);//this result like this [0][0],[0][1],[0][2]\n [1][0],[1][1],[1][1][2]
    }
    printf("\n");
}
   return 0;
}