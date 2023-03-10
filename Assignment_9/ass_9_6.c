//Check Year is leap yer or not using switch case.
#include<stdio.h>
#include<conio.h>
int main(){

    int year;

    printf("\n\nEnter Year :");
    scanf("%d",&year);

    switch(year%400==0||year%4==0&&year%100!=0)
    {
        case 1:
            printf("Enter Year is Leap Year.");
            break;
        case 0:
            printf("Enter year is not a leap year.");
            break;
    }
    getch();
}