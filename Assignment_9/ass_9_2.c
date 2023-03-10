#include<stdio.h>
#include<conio.h>
int main(){
    int n1,n2,op;
    
    printf("\n\nEnter two nuumber : ");
    scanf("%d%d",&n1,&n2);

    
    printf("\n\nEnter 1 for Addition\n");
    printf("Enter 2 for substraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 4 for Module\n");
    printf("Enter your Operation :\n");
    scanf("%d",&op);

    switch(op)
    {
        case 1 :
            printf("Sum of two number is: %d",n1+n2);
            break;
        case 2 :
            printf("Substraction of two number is: %d",n1-n2);
            break;
        case 3 :
            printf("Multiplication of two number is: %d",n1*n2);
            break;
        case 4 :
            printf("Division of two number is: %d",n1/n2);
            break;
        case 5 :
            printf("Module of two number is: %d",n1%n2);
            break; 
    }
    getch();
}