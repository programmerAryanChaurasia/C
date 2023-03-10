#include<stdio.h>
#include<conio.h>
int main(){

    int num;
    printf("Enter A number : ");
    scanf("%d",&num);
    if(num%3==0||num%7==0)
        printf("Given Number is Divisible by 3 or 7");
    else
        printf("Given number is non Divisible by 3 or 7");
    getch();
}