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
        printf("%d\n%d\n",a,b);
        for(i=1;i<=num-2;i++){
            c=a+b;
            printf("%d\n",c);
            a=b;
            b=c;
        }
    }
     
    

    getch();
}