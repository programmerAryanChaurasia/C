//Program to convert positive number to negative number and negative number to positive number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n\n\nEnter number : ");
    scanf("%d",&num);

    switch(num>0)
    {
        case 1:
            printf("\nYour number is positive.\nIts negative volue = %d",-num);
            break;
        case 0:
            switch(num<0)
            {
                case 1:
                    printf("\n\nYour number is Negative.\nIts Positive volue = %d",-num);
                    break;
                case 0:
                    printf("printf valid number any positive or negative dont enter zero or character.");
                    break;
            }
            break;
    }
    getch();
}