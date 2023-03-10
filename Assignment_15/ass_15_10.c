//Frequency of Each Element of an array...
#include<stdio.h>
#include<conio.h>
void sort(int arr[],int size){

    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
       
    }
}
void frequency(int arr[], int size){

    int i,count=1;
    for(i=0;i<size-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        } 
        else{
            printf("\nFrequency of %d is %d\n",arr[i],count);
            count=1;
        }  
    }
} 
int main(){
    int arr[]={10,5,56,4,5,6,45,65,86,456,87,4,68,55,45,4,6,4,1,2};
    int size;
    size=sizeof(arr)/sizeof(int);
    sort(arr,size);
    frequency(arr,size);
    getch();
}