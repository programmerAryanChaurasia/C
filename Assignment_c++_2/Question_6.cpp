//find given number is positive negative or zero.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num;

    printf("Enter number : ");
    scanf("%d",&num);

    if(num==0){
        printf("Your enter number is zero.");
    }
    else if(num>0){
        printf("your enter number is positive.");
    }
    else{
        printf("Your Enter number is negative.");
    }
    getch();
}