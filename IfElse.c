// doctors office 
// 1. add a patient 
//2. veiw a patient 
// 3.search patient
//4. exit
#include <stdio.h>
int main(){
printf("1. add a patient \n");
printf("2. veiw a patient\n");
printf("3.search patient\n");
printf("4. exit\n");
printf("choose from these(1 to 4) :");
int input ;
scanf("%d",&input);

if (input ==1)
{
    char name[20];
    printf("ADD patient name :");
    scanf("%s",name);
    printf("patient %s is ADD now.\n",name);

}
else if (input==2)
{
printf("you are  here to see patient please enter your name:");
    char name2[21];
    scanf("%s",name2);
    printf("%s this the list of patient\n",name2);
    printf("Rahul\n");
printf("Aman\n");
printf("Rohan\n");
printf("Arjun\n");
printf("Aditya\n");
printf("Karan\n");
printf("Ankit\n");
printf("Vivek\n");
printf("Rohit\n");
printf("Aryan\n");
printf("Priya\n");
printf("Anjali\n");
printf("Neha\n");
printf("Pooja\n");
printf("Sneha\n");
printf("Simran\n");
printf("Riya\n");
printf("Nisha\n");
printf("Kavya\n");
printf("Aisha\n");

}
else if (input == 3)
{
    printf("You are here to search patient, so please enter the name of the patient: ");

    char pname[21];
    scanf("%s", pname);

    if (strcmp(pname, "Rahul") == 0 ||
        strcmp(pname, "Aman") == 0 ||
        strcmp(pname, "Rohan") == 0 ||
        strcmp(pname, "Arjun") == 0 ||
        strcmp(pname, "Aditya") == 0 ||
        strcmp(pname, "Karan") == 0 ||
        strcmp(pname, "Ankit") == 0 ||
        strcmp(pname, "Vivek") == 0 ||
        strcmp(pname, "Rohit") == 0 ||
        strcmp(pname, "Aryan") == 0 ||
        strcmp(pname, "Priya") == 0 ||
        strcmp(pname, "Anjali") == 0 ||
        strcmp(pname, "Neha") == 0 ||
        strcmp(pname, "Pooja") == 0 ||
        strcmp(pname, "Sneha") == 0 ||
        strcmp(pname, "Simran") == 0 ||
        strcmp(pname, "Riya") == 0 ||
        strcmp(pname, "Nisha") == 0 ||
        strcmp(pname, "Kavya") == 0 ||
        strcmp(pname, "Aisha") == 0)
    {
        printf("Patient %s found!\n", pname);
    }
    else
    {
        printf("Patient %s not found.\n", pname);
    }
}
else if (input == 4)
{
    printf("THANK YOU FOR USEING THIS ");
    return 0;
}
    else 

    {
        printf("you enter something wrong ......");
    }
     printf("THANK YOU FOR THIS ");

    return 0;
}
