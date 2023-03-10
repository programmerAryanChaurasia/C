//Write a c function to print the Prime Factorial of a given number.
//for example if the your number is 36 then you result is 2  2  3  3 .
#include<stdio.h>
#include<conio.h>
void prime_factor(int n)
{   int i=2;
    while(n!=1){  
            while(n%i==0)
            {
                printf("%d\t",i);
                n=n/i;
            }
        i++;
    }
}
int main(){

    int n=95;
    prime_factor(n);
    getch();
}