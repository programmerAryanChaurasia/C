//Write a program to print all prime number under Given Range.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,i,j,count;

    printf("Enter Lower Range number :");
    scanf("%d",&n1);

    printf("Enter Upper Range number :");
    scanf("%d",&n2);

     for(i=n1;i<=n2;i++){
        count=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%d\n",i);
        }
     }
}