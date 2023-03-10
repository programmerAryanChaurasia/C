#include<stdio.h>
#include<conio.h>
int main(){

    int year;
    printf("Enter Year : ");
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||(year%400==0))
        printf("%d is a leep year",year);
    else
        printf("%d is NOT leep year",year);
    getch();
}