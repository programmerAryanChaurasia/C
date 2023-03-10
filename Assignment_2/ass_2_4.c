#include<stdio.h>
#include<conio.h>
int main(){

    int num1,num2,temp;
    printf("Enter any two Number : ");
    scanf("%d%d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("%d and %d",num1,num2);
    getch();
}