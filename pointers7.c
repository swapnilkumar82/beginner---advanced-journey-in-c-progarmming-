#include <stdio.h>
void print(char *name)
{
while(*name!= '\0')
{
printf("%c",*name);
name++;
}
printf("\n");
};
int main(){
char name[]="swapnil";
print(name);
char last_name[]="kumar";
print(last_name);
print((name)+(last_name));
   return 0;
}