#include <stdio.h>
#define columb 3
void printrows(int grades[][columb],int i)
{
for(int y=0;y<3;y++)
    {
        printf("%d ",grades[i][y]);
    }
}
int main(){
int grades[][columb]={
{88,86,83},
{47,46,42}
};
printf("%d\n",grades[1][1]);//46 output  
for(int i=0;i<2;i++)
{
printrows(grades,i);
printf("\n");
}
   return 0;
}