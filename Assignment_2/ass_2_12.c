#include<stdio.h>
#include<conio.h>
int main(){

    int amt;
    float usd;
    printf("\nEnter amount in INR : ");
    scanf("%d",&amt);
    usd=amt/76.23;
    printf("Amount in USD is : %f ",usd);
    getch();
    
}
