#include<stdio.h>
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}
    };
int player=1;
char choice;
char val;
 int i,j,winner;
 int over =0;
 int movnum=0;

void printboard()
{
    printf("*************\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("| %c ",board[i][j]);
        }
        printf("|\n");
        printf("*************\n");
    }
}

void playery()
{
    printf("Player %d choose a cell",player);
    scanf(" %c",&choice);
    if (player==1)
        val='x';
    else
        val='o';


    switch(choice)
    {
         case '1' : board[0][0]=val;
        break;
         case '2' : board[0][1]=val;
        break;
         case '3' : board[0][2]=val;
        break;
         case '4' : board[1][0]=val;
        break;
         case '5' : board[1][1]=val;
        break;
         case '6' : board[1][2]=val;
        break;
         case '7' : board[2][0]=val;
        break;
         case '8' : board[2][1]=val;
        break;
         case '9' : board[2][2]=val;
        break;
    }
    movnum++;
}

void gameover()
{


for(i=0 ; i<3 ; i++)
{
    if((board[i][0]==board[i][1])&&(board[i][1]==board[i][2]))
{
    if (board[i][0]=='x')
        winner=1;
    else
        winner=2;

    over=1;
    return;
}
}

for(j=0 ; j<3 ; j++)
{
    if((board[0][j]==board[1][j])&&(board[1][j]==board[2][j]))
{
    if (board[0][j]=='x')
        winner=1;
    else
        winner=2;

    over=1;
    return;
}
}

if ((board[0][0]==board[1][1])&&(board[1][1]==board[2][2]))
{
    if (board[0][0]=='x')
        winner=1;
    else
        winner=2;

    over=1;
    return;
}

if ((board[0][2]==board[1][1])&&(board[1][1]==board[2][0]))
{
    if (board[2][0]=='x')
        winner=1;
    else
        winner=2;

    over=1;
    return;
}

if (movnum==8)
{
    winner=0;
    over=1;
}

}



main()
{
   printboard();


   while (over!=1)
   {
       playery();
       printboard();
       gameover();
       if (player==1)
            player=2;
       else
            player=1;

   }


}

