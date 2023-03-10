//Print All unique NUMBER in a arry...
// Step 1.      First sort the array.
// Step 2.      if arr[i]==arr[i+1]  -->  continue ;   else print arr[i+1]
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
void unique(int arr[], int size){

    int i;
    printf("%d\t",arr[0]);
    for(i=0;i<size-1;i++){
        if(arr[i]==arr[i+1])
            continue;
        else
            printf("%d\t",arr[i+1]);
    }
}
int main(){
    int arr[]={10,5,56,4,5,6,45,65,86,456,87,4,68,55,45,4,6,4,1,2};
    int size,occur,i;
    size=sizeof(arr)/sizeof(int);
    sort(arr,size);
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n\nAll unique number :\n");
    unique(arr,size);
    getch();
}