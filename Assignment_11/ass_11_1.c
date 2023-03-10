//Calculate lcm of two number.
#include<stdio.h>
#include<conio.h>
int lcm(int a, int b){
    int i;
    if(a>b){
        for(i=a;1;i++){
            if((i%a==0)&&(i%b==0)){
                return i;
            }
        }
    }
    else if(b>a){
        for(i=b;1;i++){
            if((i%a==0)&&(i%b==0)){
                return i;
           }
        }
    }
    else if(b==a){
        return a;
    }
}
int main(){
    int a,b,k;
    printf("Enter Two number for calculate lcm :");
    scanf("%d%d",&a,&b);
    k=lcm(a,b);
    printf("Lcm of two number is %d",k);
    getch();
}
