//write a function in c to count totla number of duplicate elements in array...
// Steps-- 1 . sort the array.
// then count unique elemrnt;
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
int duplicate(int arr[], int size){

    int i,count=0;
    for(i=0;i<size-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }   
    }
    return count;
} 
int main(){
    int arr[]={10,5,56,4,5,6,45,65,86,456,87,4,68,55,45,4,6,4,1,2};
    int size,occur;
    size=sizeof(arr)/sizeof(int);
    sort(arr,size);
    occur=duplicate(arr,size);
    printf("%d",occur);
    getch();
}