#include<stdio.h>
#include<conio.h>
int natural_number(int n){
    if(n!=0){
        natural_number(n-1);
        printf("%d\t",n);
    }
    else
        return 0;
}

int main(){
    int n;
    printf("Enter any nuumber :");
    scanf("%d",&n);
    natural_number(n);
    getch();
}