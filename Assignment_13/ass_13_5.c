//Sum of digit of given number...
#include<stdio.h>
#include<conio.h>
int sum=0;
int sum_of_digits(int n){
    if(n>0){
        sum+=n%10;
        sum_of_digits(n/10);          
    }
    return sum;
}
int main()
{
    printf("Sum of odd number = %d",sum_of_digits(1024));
    getch();
}