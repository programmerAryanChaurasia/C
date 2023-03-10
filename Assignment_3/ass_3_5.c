#include<stdio.h>
#include<conio.h>
int main(){

    int num;
    printf("Enter A number : ");
    scanf("%d",&num);
    if(num>=99&&num<=999)
        printf("Three Digit number");
   else
        printf("Not Three didit number");

    
    getch();
}