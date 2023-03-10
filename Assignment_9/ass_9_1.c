#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n\nEnter month number :\n");
    printf("Enter 1 for january. \nEnter 2 for febuary.\nEnter 3 for march.\n........\nEnter 12 for Decomber\n\n");
    scanf("%d",&num);
    switch(num){
        case 1:
            printf("January");
            break;
        case 2:
            printf("Febaury");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("Setember");
            break;
        case 10:
            printf("Octomber");
            break;
        case 11:
            printf("Nomber");
            break;
        case 12:
            printf("Decomber");
            break;
           
    }
    getch();

}