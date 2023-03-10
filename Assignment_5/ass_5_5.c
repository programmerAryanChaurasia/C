#include<stdio.h>
#include<conio.h>
int main(){

   int n,i;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=n*2;i>=1;i--){ 
        if(i%2!=0)
            printf("%d\n",i);
        }
    getch();
}