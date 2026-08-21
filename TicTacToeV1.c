#include <stdio.h>
void boardsturcture(char board[3][3])
{
for(int i=0;i<3;i++)
{
    for(int y=0;y<3;y++)
    {
        printf("%c",board[i][y]);
        if(y<2)
        {
            printf(" | ");
        }
    }
    printf("\n");
    printf("----------\n");
}

}
int main(){
char board[3][3]={
{'1','2','3'},
{'4','5','6'},
{'7','8','9'}
};

boardsturcture(board);
for(int turn=0;turn<9;turn++)
{
printf("enter player x (1-9):");
char number;
scanf(" %c",&number);
if(number=='1')
{
board[0][0]='x';
boardsturcture(board);
}

else if(number=='2')
{
board[0][1]='x';
boardsturcture(board);
}

else if(number=='3')
{
board[0][2]='x';
boardsturcture(board);
}

else if(number=='4')
{
board[1][0]='x';
boardsturcture(board);
}

else if(number=='5')
{
board[1][1]='x';
boardsturcture(board);
}

else if(number=='6')
{
board[1][2]='x';
boardsturcture(board);
}
else if(number=='7')
{
board[2][0]='x';
boardsturcture(board);
}
else if(number=='8')
{
board[2][1]='x';
boardsturcture(board);
}
else if(number=='9')
{
board[2][2]='x';
boardsturcture(board);
}
else
{
   int i =1;
   while(i>0)
   {
    printf("you are the only smart !!!!!\n");
   }
}
printf("now the choose player y (1-9):");
scanf(" %c",&number);
if(number=='1')
{
board[0][0]='y';
boardsturcture(board);
}

else if(number=='2')
{
board[0][1]='y';
boardsturcture(board);
}

else if(number=='3')
{
board[0][2]='y';
boardsturcture(board);
}

else if(number=='4')
{
board[1][0]='y';
boardsturcture(board);
}

else if(number=='5')
{
board[1][1]='y';
boardsturcture(board);
}

else if(number=='6')
{
board[1][2]='y';
boardsturcture(board);
}
else if(number=='7')
{
board[2][0]='y';
boardsturcture(board);
}
else if(number=='8')
{
board[2][1]='y';
boardsturcture(board);
}
else if(number=='9')
{
board[2][2]='y';
boardsturcture(board);
}

if(board[0][0]=='x' && board[0][1]=='x' && board[0][2]=='x')
{
    printf("player x wins\n");
    break;
}

if(board[1][0]=='x' && board[1][1]=='x' && board[1][2]=='x')
{
    printf("player x wins\n");
    break;
}

if(board[2][0]=='x' && board[2][1]=='x' && board[2][2]=='x')
{
    printf("player x wins\n");
    break;
}

if(board[0][0]=='x' && board[1][0]=='x' && board[2][0]=='x')
{
    printf("player x wins\n");
    break;
}

if(board[0][1]=='x' && board[1][1]=='x' && board[2][1]=='x')
{
    printf("player x wins\n");
    break;
}

if(board[0][2]=='x' && board[1][2]=='x' && board[2][2]=='x')
{
    printf("player x wins\n");
    break;
}

if(board[0][0]=='x' && board[1][1]=='x' && board[2][2]=='x')
{
    printf("player x wins\n");
    break;
}

if(board[0][2]=='x' && board[1][1]=='x' && board[2][0]=='x')
{
    printf("player x wins\n");
    break;
}

if(board[0][0]=='y' && board[0][1]=='y' && board[0][2]=='y')
{
    printf("player y wins\n");
    break;
}

if(board[1][0]=='y' && board[1][1]=='y' && board[1][2]=='y')
{
    printf("player y wins\n");
    break;
}

if(board[2][0]=='y' && board[2][1]=='y' && board[2][2]=='y')
{
    printf("player y wins\n");
    break;
}

if(board[0][0]=='y' && board[1][0]=='y' && board[2][0]=='y')
{
    printf("player y wins\n");
    break;
}

if(board[0][1]=='y' && board[1][1]=='y' && board[2][1]=='y')
{
    printf("player y wins\n");
    break;
}

if(board[0][2]=='y' && board[1][2]=='y' && board[2][2]=='y')
{
    printf("player y wins\n");
    break;
}

if(board[0][0]=='y' && board[1][1]=='y' && board[2][2]=='y')
{
    printf("player y wins\n");
    break;
}

if(board[0][2]=='y' && board[1][1]=='y' && board[2][0]=='y')
{
    printf("player y wins\n");
    break;
}
}
return 0;
}