#include<stdio.h>
#include<conio.h>
int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num%2==0)
        printf("%d is a Even number",num);
    else
        printf("%d is NOT a even number",num);
    getch();
}