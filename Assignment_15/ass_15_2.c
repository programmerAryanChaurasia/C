//Find Smallest number from the given array of any size...
#include<stdio.h>
#include<conio.h>
int greatest (int arr[],int size){

    int i,min;
    min=arr[0];
    for(i=1;i<size;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    return min;

}
int main(){

    int arr[]={10,5,56,4,5,6,45,65,86,456,87,4,68,55,45,4,6,4,1,2};
    int size,k;
    size=sizeof(arr)/sizeof(int);
    k=greatest(arr,size);
    printf("Minium number in given array = %d",k);
    getch();
}