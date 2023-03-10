//Write a function to calculate the factorical of a number.
#include<stdio.h>
#include<conio.h>
int fact (int n)
{
    int i,factorial=1;
    for(i=1;i<=n;i++)
        factorial=factorial*i;
    return factorial;
}
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    printf("Factorial of number is %d",fact(n));
    getch();
}