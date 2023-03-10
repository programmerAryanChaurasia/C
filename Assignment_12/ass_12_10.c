#include<stdio.h>
#include<conio.h>
int sum=0,rem;
int rev_num(int n){
    if(n!=0){
        rem=n%10;
        sum=sum*10+rem;
        rev_num(n/10);
    }
    else
        return sum;
}
int main(){
    
    printf("%d",rev_num(1024));
    getch();
}