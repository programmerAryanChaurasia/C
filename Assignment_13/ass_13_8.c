//Print n tern of fibonacci series...
#include<stdio.h>
#include<conio.h>
int fibo(int n){
  static int a=0,b=1,c;
  if(n>0){
    c=a+b;
    a=b;
    b=c;
    printf("%d\t",c);
    fibo(n-1);
  }
}
int main()
{   int n=10;
    printf("%d\t%d\t",0,1);
    fibo(n-2);
    getch();
}