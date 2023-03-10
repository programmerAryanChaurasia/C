#include<stdio.h>
#include<conio.h>
int main(){

    int i,num,a=0,b=1,c,count;
    printf("Enter Number of term : ");
    scanf("%d",&num);
    if(num==1){
        printf("%d\n",a);
    }
    if(num==2){
        printf("%d\n",b);
    }
    if(num>2){
        for(i=1;i<=num-2;i++){
            c=a+b;
            a=b;
            b=c;
        }
    }
        printf("%d",c);
    

    getch();
}