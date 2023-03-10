//Calculate HCF of two number in c language

#include<stdio.h>
#include<conio.h>
int main(){
    int n1,n2,i;
    printf("Enter two number :");
    scanf("%d%d",&n1,&n2);
    if(n1==n2){
        printf("HCF = %d",n1);
    }
    else if(n1>n2){
        for(i=n2;i>=1;i--){
            if(n1%i==0&&n2%i==0){
                printf("HCF =%d",i);
                break;
            }
        }
    }
    else if(n2>n1){
        for(i=n1;i>=1;i--){
            if(n1%i==0&&n2%i==0){
                printf("HCF =%d",i);
                break;
            }
        }
    }
}