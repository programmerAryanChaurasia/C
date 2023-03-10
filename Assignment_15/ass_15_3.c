//Sort the array....
#include<stdio.h>
#include<conio.h>
void sort(int arr[], int size){
    
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
int main(){
    int arr[]={10,5,56,4,5,6,45,65,86,456,87,4,68,55,45,4,6,4,1,2};
    int size,i;
    size=sizeof(arr)/sizeof(int);
    sort(arr,size);
    printf("Array in sorted order...");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    getch();
}