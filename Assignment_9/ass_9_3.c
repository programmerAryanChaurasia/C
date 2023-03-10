#include<stdio.h>
#include<conio.h>
int main(){
    int num;

    printf("\nIf day is Monday then enter 1.\n");
    printf("If day is Tuesday then enter 2.\n");
    printf("If day is Wednesday then enter 3.\n");
    printf("If day is Thersday then enter 4.\n");
    printf("If day is Friday then enter 5.\n");
    printf("If day is Saturday then enter 6.\n");
    printf("If day is Sunday then enter 7.\n");


    printf("\nEnter our choice: ");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
            printf("Today is Monday");
            break;
        case 2:
            printf("Today is Tuesday");
            break;
        case 3:
            printf("today is Wednesday");
            break;
        case 4: 
            printf("Today is Thursday");
            break;
        case 5:
            printf("Today is Friday");
            break;
        case 6:
            printf("Today is Saturday");
            break;
        case 7:
            printf("Today is Sunday");
            break;
    }
    getch();    
}