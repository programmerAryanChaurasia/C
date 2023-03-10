//check wether given year is leep year or not.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int year;

    printf("Enter year : ");
    scanf("%d",&year);

    if((year%4==0&&year%100!=0)||(year%400==0)){
        printf("%d is leep year",year);
    }
    else{
        printf("%d is not a leep year",year);
    }
    getch();
}
