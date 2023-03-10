#include<stdio.h>
#include<conio.h>
int main(){

    int num1,num2,num3;
    printf("Enter Three side length of triangle : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1<=num3+num2&&num2<=num1+num3&&num3<=num1+num2)
        printf("triangle is valid ");
    else
        printf("triangle is not valid");
    getch();
}