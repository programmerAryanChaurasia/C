#include<stdio.h>
#include<conio.h>
int main(){

    int num;
    printf("Enter A number : ");
    scanf("%d",&num);
    if(num>=1)
        printf("Given Number is positive");
    else
        printf("Given number is non positive");
    getch();
}