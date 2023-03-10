#include<stdio.h>
#include<conio.h>
int main(){

    int num;
    printf("Enter A number : ");
    scanf("%d",&num);
    if(num>0)
        printf("Given Number is Positive");
    else if(num<0)
        printf("Given number is Negative");
    else
        printf("goven NUmber is zero");
    getch();
}