//Write a program to check given number are co-prime or not!
//Co-prime number is parir of number that do not have any Common factor other than one eg: (4 and 7)

#include<stdio.h>
#include<conio.h>
int main(){
    int n1,n2,i,count=0;
    printf("Enter two number :");
    scanf("%d%d",&n1,&n2);
 
    if(n1==n2){
        printf("%d and %d is not a co-prime number",n1,n2);
    }
    else if(n1>n2){
        for(i=n1;i>=2;i--){
            if(n1%i==0&&n2%i==0){
                count++;
                break;
            }
        }
        if(count!=0){
            printf("%d and %d is not a co-prime number",n1,n2);
        }
        else{
            printf("%d and %d is a co-prime number",n1,n2);
        }
    }
    else if(n2>n1){
        for(i=n1;i>=2;i--){
            if(n1%i==0&&n2%i==0){
                count++;
                break;
            }
        }
        if(count!=0){
            printf("%d and %d is not a co-prime number",n1,n2);
        }
        else{
            printf("%d and %d is a co-prime number",n1,n2);
        }
    }

}