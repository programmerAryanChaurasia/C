//All prime number bettween two number...
#include<stdio.h>
#include<conio.h>
void prime_number(int n1, int n2){
    int i,j,k;
    for(i=n1;i<=n2;i++){
        k=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                k++;
                break;
            }
        }
        if(k==0){  
            printf("%d\t",i);
        }
    }
}
int main(){
    int a,b;
    printf("Enter two Number.\nFirst Enter Lower Range. Then Enter Upper Range. ");
    scanf("%d%d",&a,&b);
    prime_number(a,b);
    getch();
}