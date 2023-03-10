//Check prime number
#include<stdio.h>
#include<conio.h>
int check_prime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){

    int n;
    printf("Enter Any number to check it is prime or not : ");
    scanf("%d",&n);
    if(check_prime(n)){
        printf("%d is a prime number.",n);
    }
    else{
        printf("%d is not a prime nummber",n);
    }
    getch();
}
