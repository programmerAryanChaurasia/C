//find greatest among three number.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num1,num2,num3;

    printf("Enter three number : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2&&num1>num3){
        printf("%d is Greatest",num1);
    }
    if(num2>num1&&num2>num3){
        printf("%d is Greatest",num2);
    }
    if(num3>num2&&num3>num1){
        printf("%d is Greatest",num3);
    }
    getch();
}