#include<stdio.h>
#include<conio.h>
int main(){

    int num;
    printf("Enter any Number : ");
    scanf("%d",&num);

    num=num/10;
    num=num*10;
    printf("%d",num);
    getch();
}