//Hcf of two number.
#include<stdio.h>
#include<conio.h>
int hcf(int a, int b){
    int i;
    if(a>=b){
        for(i=b;i>=1;i--){
            if((b%i==0)&&(a%i==0)){
                return i;
            }
        }
    }
    if(b>a){
        for(i=a;i>=1;i--){
            if((b%i==0)&&(a%i==0)){
                return i;
            }
        }
    }
}
int main(){
    int a,b;
    printf("\n\nEnter two number to calculate HCF : ");
    scanf("%d%d",&a,&b);
    printf("HCF of two number is %d",hcf(a,b));
    getch();
}