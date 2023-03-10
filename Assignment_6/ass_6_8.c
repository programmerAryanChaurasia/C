
//A number which is only divisible one or itself.  eg. 1,3,5,7,11,13,17,19,23,... 
#include<stdio.h>
#include<conio.h>
int main(){

    int n,i,count=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
   if(count==0)
        printf("%d is a prime number",n);
   else
        printf("%d is not a prime number",n);
    getch();
}
