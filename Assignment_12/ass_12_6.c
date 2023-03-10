#include<stdio.h>
#include<conio.h>
int natural_number(int n){
    if(n!=0){
        if(n%2==0){
            printf("%d\t",n);
        }
        natural_number(n-1);
    }
    else
        return 0;
}

int main(){
    int n,k;
    printf("Enter any nuumber :");
    scanf("%d",&n);
    k=2*n;
    natural_number(k);
    getch();
}