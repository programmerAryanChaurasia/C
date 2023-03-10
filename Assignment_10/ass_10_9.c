//write a function to check given number consist given digit or not.
#include<stdio.h>
#include<conio.h>
int check_digit(int n, int k)
{
    int rem;
    while(n>0){
        rem=n%10;
        if(rem==k){
            return 1;
        }
        n=n/10;
    }
    return 0;
}
int main()
{
    int n,k,check;
    printf("Enter number : ");
    scanf("%d",&n);

    printf("Enter digit : ");
    scanf("%d",&k);

    check=check_digit(n,k);
    
    if(check){
        printf("%d is Avalible in number %d.",k,n);
    }
    else{
        printf("%d is NOT avalible in number %d.",k,n);
    }
}