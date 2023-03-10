//Sum of all even number and sum of all odd number store in array in size 10...
#include<stdio.h>
#include<conio.h>

int main(){

    int arr[10];
    int i;
    int avg,sum_even=0,sum_odd=0;

    printf("\n\nEnter 10 volue to calculate sum of odd and even numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    //
    for(i=0;i<10;i++)
    {
        if((arr[i]%2)==0)
            sum_even+=arr[i];
        else if(arr[i]%2!=0)
            sum_odd+=arr[i];
    }
    

    printf("Sum of Even Numbers = %d\n",sum_even);
    printf("Sum of Odd Numbers = %d\n",sum_odd);
    getch();
}