#include<stdio.h>
#include<conio.h>
int main(){

    int i,num,a=0,b=1,c,count=0;
    printf("Enter Number : ");
    scanf("%d",&num);
    if(num==0||num==1){
        printf("%d is in the fibonacci Series",num);
    }
    if(num>=2){
        for(i=1;i<=num;i++){
            c=a+b;
            if(c==num){
               count++;
               break;
            }
            a=b;
            b=c;
        }
        if(count!=0){
             printf("%d is present in fibonacci series",num);
        }
        else{
             printf("%d is NOT present in fibonacci series",num);
        }
    }
     
    

    getch();
}