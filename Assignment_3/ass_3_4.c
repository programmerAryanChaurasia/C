#include<stdio.h>
#include<conio.h>
int main(){

    int num,k;
    printf("Enter a number : ");
    scanf("%d",&num);

    k=num;
    num=num/2;
    num=num*2;

    if(k==num){
        printf("%d is even number ",k);
    }
    else{
        printf("%d is odd number",k);
    }

    getch();
}