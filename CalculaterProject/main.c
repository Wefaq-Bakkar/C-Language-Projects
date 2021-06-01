#include<stdio.h> //impoting standard input/output Library!
#include<stdlib.h> //impoting standard Library!
#include<string.h> //impoting standard srring Library!


int main()
{

    int c,password=112233,Inputpass;
    float a,b,result;
    char x[1],Name[10]="Wefaq",InputName[10];


    printf("Enter your name : ");
    gets(InputName);

    printf("Enter your password : ");
    scanf("%d",&Inputpass);

    if (strcmp(InputName,Name)==0 && Inputpass==password)
    {
        printf("Welcome Ms.%s to your calculater, now you can use it\n",Name);

        printf("Please enter the first number : ");
        scanf("%f",&a);
        printf("\nThe first number is %f",a);
        printf("\n______________________________");
        printf("\nEnter the second number : ");
        scanf("%f",&b);
        printf("\nThe second number is %f",b);
        printf("\nDo you want any operations between these numbers?");
        printf("Press (y) for yes, or press (n) for no \n");
        scanf("%s",&x[0]);

         if (x[0]=='y')
        {
            printf("\nwhich one of these operators do you want to use ?");
            printf("\n1-Addition\n");
            printf("2-Subtraction\n");
            printf("3-Multiplication\n");
            printf("4-Division\n");
            printf("5-cube of first nuber \n");
            printf("6-cube of second nuber\n");
            printf("Please enter the number of yur choice : ");
            scanf("%d",&c);
        }

        switch(c)
        {
         case 1:
             result=a+b;
             printf("you've chosen Addition of %f + %f = %f",a,b,result);
             break;
         case 2:
             result=a-b;
             printf("you've chosen Subtaction of %f - %f = %f",a,b,result);
             break;
         case 3:
             result=a*b;
             printf("you've chosen Multiplicaton of %f * %f = %f",a,b,result);
             break;
         case 4:

             if (( a==0 && b==0)|| b==0)
             {
                 printf("This impossible to divide by Zero!");
             }
             else
             {
                 result=a/b;
                 printf("you've chosen Division of %f / %f = %f",a,b,result);
             }

             break;
         case 5:
             result=a*a*a;
             printf("you've chosen cube of %f ^3 = %f",a,result);
             break;
         case 6:
             result=b*b*b;
             printf("you've chosen cube of %f ^3= %f",b,result);
             break;
         default:
            printf("Please try again later by choosing between 1");
            break;
        }



        if (x[0]=='n')
        {
            printf("Thanks for using my program I hope you like it \n");
            system("pause");
        }

    }
    else if (strcmp(InputName,Name)!=0 && Inputpass!=password)
    {
       printf("Sorry, error ...");
       system("pause");
    }




    return 0;
}
