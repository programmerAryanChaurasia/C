#include<stdio.h>
#include<conio.h>
int main(){

    int num1,num2;
    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        printf("%d is Greater",num1);
    else if (num2>num1)
       printf("%d is Greater",num2);
    else
        printf("Both are equal!");
    getch();
}