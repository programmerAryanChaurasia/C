//find given numver is valid octal number is not.

//A Numbe is valid octal number if it contain only zero to 7 number.

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int oct,rem,count=0,k;
    printf("Enter octal number for checking it valid or not : ");
    scanf("%d",&oct);
    k=oct;
    while(oct>0){
        rem=oct%10;
        if(rem>7){
            count++;
            break;
        }
        oct=oct/10;
    }
    if(count>0){
        printf("%d is not a OCTAL number.",k);
    }
    else{
        printf("%d is a OCTAL number.",k);
    }
    getch();
}