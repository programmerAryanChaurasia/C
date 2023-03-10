//123   after rotation 312
#include<stdio.h>
#include<conio.h>
int main(){

 int num,k;
    printf("Enter three digit number : ");
    scanf("%d",&num);
    k=num%10;
    num=num/10;
    printf("%d%d",k,num);
    getch();
    
}
