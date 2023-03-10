// print square of any number...
#include<stdio.h>
#include<conio.h>
int square(int n){
    return n*n;
}
int main(){
    int n=12;
    printf("Square of %d is %d",n,square(n));
    getch();
}