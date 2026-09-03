#include <stdio.h>
#include <string.h>
int main(){
char name[]="swapnil";
printf("size in bytes =%i\n",sizeof(name));
printf("size of the character = %d\n",strlen(name));
printf("%c",name[7]);
char *p;
p=name;
printf("%s\n",p);
char *c;
for(int i=0;i<7;i++)
{
c=&name[i];
printf("%c\n",*c);
}
    return 0;
} 