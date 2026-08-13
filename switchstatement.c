#include <stdio.h>
int main(){
    char name[21];
    printf("Enter your name :");
    scanf("%s",name);
    printf("hello %s welcome to food calculater",name);
    int slices;
    printf(" enter the slices of pizza you eat:");
    scanf("%d",&slices);
    int oneslicecaleries= 250; 
    switch(slices)
    {
        case 1:
        printf("1 slice is good but if you need you eat more\n");
        break;
        case 2:
        printf("this is good for the who is working on fitness\n");
        break;
        case 3:
        printf("not  bad \n");
        break;
        case 4:
        printf("need some running or walking otherwise but bad \n");
        break;
        default:
        printf("enjoy you are on the tarck of the heart problem\n");
        break;
    }
    printf("DO YOU WANT TO THE YOUR knnow CALARIES IF YES ENETR(1) OTHERWISE(0):");
    int input;
    scanf("%d",&input);
    if(input==1)
    {
    int eatercal= slices * oneslicecaleries;       
    printf("%s your total calceries is:%d\n",name,eatercal);
    printf("THANK YOU %s FOR USEING\n",name);
    }
    else
    {
        printf("THANK YOU %s FOR USEING THIS SYSTEM  \n",name);
    }
    return 0;
}