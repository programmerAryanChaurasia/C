//Write a program to print the element of an array in reversr orderusing pointer.

#include<stdio.h>
#include<string.h>
#include<conio.h>
void reversr(int *arr){
    
    int i;
    for(i=9;i>=0;i--){
        printf("\n%d",*(arr+i));
    }

}

int main(){

    int arr[10]={10,2,4,2,5,4,9,4,6,5};

    reversr(arr);

    getch();

}
