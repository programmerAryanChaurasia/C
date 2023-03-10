//write a function to print first n prime number...
#include<stdio.h>
#include<conio.h>
void prime_number(int n){
    int i,j,count=0,k;
    for(i=2;1;i++){
        k=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                k++;
                break;
            }
        }
        if(k==0){
            count++;
            printf("%d\t",i);
            if(count==n)
                break;
        }
    }
}
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    prime_number(n);
    getch();
}