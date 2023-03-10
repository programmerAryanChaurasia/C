//write a function to rotate array by two position in left direction...
#include<stdio.h>
#include<conio.h>
void rotate_array(int arr[],int size){

    int i,temp1,temp2;
    temp1=arr[0];
    temp2=arr[1];

    for(i=2;i<size;i++){
        arr[i-2]=arr[i];
    }
    arr[size-2]=temp1;
     arr[size-1]=temp2;

}
int main(){

    int arr[]={10,5,56,4,5,6,45,65,86,456,87,4,68,55,45,4,6,4,1,2};
    int size,i;
    size=sizeof(arr)/sizeof(int);
    rotate_array(arr,size);
    printf("Array Rotated By two...");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    getch();
}