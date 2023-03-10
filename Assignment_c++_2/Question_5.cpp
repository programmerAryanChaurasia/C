//compare two number

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num1,num2;

    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);

    if(num1==num2){
        printf("Both number are equal");
    }
    else{
        printf("Both number are not equal");
    }
    getch();
}