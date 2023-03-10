//write a function to swap values of two variable using pointer
#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b){

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){

    int a=10;
    int b=12;

    swap(&a,&b);
    printf("Volue after swaping.");
    printf("\na = %d\nb = %d",a,b);
    return 0;
}