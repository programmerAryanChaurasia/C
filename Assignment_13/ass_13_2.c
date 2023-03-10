//Recursive function to print sum of first n ODD natural number...
#include<stdio.h>
#include<conio.h>
int sum=0;
int sum_recursive(int n){
    if(n>0){
        sum_recursive(n-1);  
        if(n%2!=0){
            sum=sum+n;
             }
             
    }
    return sum;
}
int main()
{
    printf("Sum of odd number = %d",sum_recursive(5*2));
    getch();
}