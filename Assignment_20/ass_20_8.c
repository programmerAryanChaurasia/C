//write a program to find the sum of all element in all array using pointer.
#include<stdio.h>
#include<string.h>
#include<conio.h>
int addition(int *arr){
    
    int i,add=0;
    for(i=0;i<10;i++){
        add=add + *(arr+i);
    }
    return add;
}

int main(){

    int add;
    int arr[10]={10,2,4,2,5,4,9,4,6,5};

    add=addition(arr);
   
    printf("Enter Sum of all element in array %d",add);

    getch();

}
