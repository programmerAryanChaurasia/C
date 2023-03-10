//Print first n number of fibonacci series...
#include<stdio.h>
#include<conio.h>
void fibo(int n){
    int a=0,b=1,c,i;
    if(n==1)
        printf("%d\t",a);
    if(n==2)
        printf("%d\t%d",a,b);
    c=a+b;
    if(n>2){
        printf("%d\t%d\t",a,b);
        for(i=1;i<=n-2;i++){
            printf("%d\t",c);
            a=b;
            b=c;
            c=a+b;
        }
    }
}
int main(){
    int n=20;
    fibo(n);
    getch();
}