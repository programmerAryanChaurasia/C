#include<stdio.h>
#include<conio.h>
int main(){

    int num1,num2,max,i;
    printf("Enter two number :");
    scanf("%d%d",&num1,&num2);
    if(num1>=num2){
        for(i=num1;i<=num1*num2;i++){
            if(i%num1==0&&i%num2==0){
                printf("Least Common factor(LCM) = %d",i);
                break;
            }
        }
    }
    if(num2>num1){
        for(i=num2;i<=num1*num2;i++){
            if(i%num1==0&&i%num2==0){
                printf("Least Common factor(LCM) = %d",i);
                break;
            }
        }
    }



    getch();
}