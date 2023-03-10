//find enter number of even or odd.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num;

    printf("Enter number : ");
    scanf("%d",&num);

    if(num%2==0){
        printf("%d is Even",num);
    }
    else{
        printf("%d is odd",num);
    }
    getch();
}