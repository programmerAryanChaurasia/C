//Write a program to print all prime number under Given Range.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,count;

    printf("Enter number :");
    scanf("%d",&n);

     for(i=n+1;i>n;i++){
        count=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%d\n",i);
            break;
        }
     }
}