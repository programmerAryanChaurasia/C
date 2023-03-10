//Check given number is divisible by 7 or not.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num;

    printf("Enter nmber : ");
    scanf("%d",&num);

    if(num%7==0){
        printf("number is divisible by 7");
    }
    else{
        printf("Number is not divisible by 7 ");
    }
    getch();
}