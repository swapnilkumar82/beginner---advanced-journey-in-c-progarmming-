#include <stdio.h>
#include<string.h>
struct info
{
    char name[50];
    char password[51];
};
int main(){
struct info name1;
struct info password1;
printf("hello please enter your name :");
scanf("%49s",name1.name);
printf("%s enter your password:",name1.name);
scanf("%50s",name1.password );
if(strcmp(name1.password,"swapnil369")==0)
{
    int i=1;
while(i>0)
{
printf("hello boss\n");
}
}
else
{
    int y =1;
while (y>0)
{
    printf("WORNG PASSWORD!!!!!!!!!!!!!!!!\n");
}
}
        return 0;    
}