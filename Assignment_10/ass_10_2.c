//write a function to calculate simple interest.

#include<stdio.h>
#include<conio.h>
int interest(int p,int r,int t)
{
    return (p*r*t)/100;
}
int main()
{
    int p,r,t;
    printf("\n\nEnter Principle volue, Rate of interest and time in year :");
    scanf("%d%d%d",&p,&r,&t);

    printf("Simple interest is equql to %d",interest(p,r,t));
    getch();
}