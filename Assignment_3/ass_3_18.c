#include<stdio.h>
#include<conio.h>
int main(){

    int month;
    printf("\n1.  January\n2.  Febuary\n3.  March\n.....\n12.  Decomber");
    printf("\n\nEnter The Month Number : ");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        printf("Number of days is \"31\"");
    else if(month==4||month==6||month==9||month==11)
        printf("Number of days is \"30\"");
    else if(month==2)
        printf("Number of days is \"28\"");
    else
        printf("Please Enter Valid number between 1 to 12");
    getch();
}