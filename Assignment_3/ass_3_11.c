#include<stdio.h>
#include<conio.h>
int main(){

    int num1,num2,num3,num4,num5;
    printf("Enter Five subject number : ");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
    if(num1>=33&&num2>=33&&num3>=33&&num4>=33&&num5>=33)
        printf("Student is Pass ");
    else
        printf("Student is fail!");
    getch();
}