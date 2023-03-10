//Count the digit in given number...
#include<stdio.h>
#include<conio.h>
int count_digit(int n){
    static int i=0;
    if(n>0){
         i++;
         count_digit(n/10);
    }
    return i;
}
int main()
{
    printf("Number of digit is Equql to %d",count_digit(1024));
    getch();
}