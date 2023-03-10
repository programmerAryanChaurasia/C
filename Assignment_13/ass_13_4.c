//Recursive function to print sum of Square of first n natural number...
#include<stdio.h>
#include<conio.h>
int sum=0;
int sum_square_recursive(int n){
    if(n>0){
        sum_square_recursive(n-1);    
            sum=sum+n*n;          
    }
    return sum;
}
int main()
{
    printf("Sum of square of number = %d",sum_square_recursive(7));
    getch();
}