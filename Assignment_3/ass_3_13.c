#include<stdio.h>
#include<conio.h>
int main(){

    int num;
    printf("Enter A number : ");
    scanf("%d",&num);
    if(num%3==0&&num%2==0)
        printf("Given Number is Divisible by 3 and 2");
    else
        printf("Given number is non Divisible by 3 and 2");
    getch();
}