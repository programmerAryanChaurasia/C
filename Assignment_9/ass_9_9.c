//Convert Even number into upper nearest odd number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n\n\nEnter number : ");
    scanf("%d",&num);

    switch(num%2==0)
    {
        case 1:
            printf("\nUpper nearest odd number = %d",num+1);
            break;
        case 0:
            printf("Your enter volue is not even");
            break;
    }
    getch();
}