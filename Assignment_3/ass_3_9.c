#include<stdio.h>
#include<conio.h>
int main(){

    int num1,num2,num3,max,min;
    printf("Enter Three number : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    //Find Max number
    if(num1>num2){
        if(num1>num3){
            max=num1;
        }
        else{
            max=num3;
        }
    }
    else if (num2>num3)
    {
        max=num2;
    }
    else{
        max=num3;
    }
    printf("\n Max : %d",max);

    //Find min number
    if(num1<num2){
        if(num1<num3){
            min=num1;
        }
        else{
            min=num3;
        }
    }
    else if (num2<num3)
    {
        min=num2;
    }
    else{
        min=num3;
    }
    printf("\n Min : %d",min);


    getch();
}