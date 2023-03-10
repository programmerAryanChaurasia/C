#include<stdio.h>
#include<conio.h>
int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num%5==0)
        printf("%d is Divisible by 5",num);
    else
        printf("%d is not divisible by 5",num);
    getch();
}