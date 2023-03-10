#include<stdio.h>
#include<conio.h>
int main(){

    int n,i,sum=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){ 
        sum+=i;
        }
    }
    printf("Sum = %d",sum);
    getch();
}
