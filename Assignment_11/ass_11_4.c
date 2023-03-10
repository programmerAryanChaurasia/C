//Write a c program to find next prime number...
#include<stdio.h>
#include<conio.h>
int next_prime(int n){
    int i,count,j;
    for(i=n+1;i>n;i++){
        count=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            return i;
        }
    }
}
int main(){
    int n;
    printf("Enter number to find next prime :");
    scanf("%d",&n);
    printf("%d",next_prime(n));
    getch();

}