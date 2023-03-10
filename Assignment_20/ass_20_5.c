//Write a program to find the max. number between two number using pointer.
#include<stdio.h>
#include<conio.h>
#include<string.h>

int max(int *a, int *b){

    if(*a>*b){
        return *a;
    }
    else{
        return *b;
    }

}
int main(){

    int maxi;
    int a=30;
    int b=30;
    printf("\n\nVolue of Both number :\n");
    printf("a = %d\nb = %d",a,b);
    
    maxi = max(&a,&b);

    printf("\nMaxium number = %d",maxi);

    getch();

}