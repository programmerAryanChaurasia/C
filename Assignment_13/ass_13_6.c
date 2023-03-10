//print Factorial of a given number.....
#include<stdio.h>
#include<conio.h>
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    if(n>1){
        return n*factorial(n-1);
    }    
}
int main()
{
    printf("Factorial of a given number = %d",factorial(6));
    getch();
}