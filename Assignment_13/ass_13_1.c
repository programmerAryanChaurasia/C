//Recursive function to print sum of first n natural number...
#include<stdio.h>
#include<conio.h>

int sum_recursive(int n){
    if(n>0){

        return n+sum_recursive(n-1);
    }
}
int main()
{
    printf("%d",sum_recursive(5));
    getch();
}