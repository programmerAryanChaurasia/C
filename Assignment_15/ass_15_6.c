//write a function to reas n volue of array and display it in reverse order...
#include<stdio.h>
#include<conio.h>
void input_array(int arr[], int size){
    int i;
    printf("Enter %d elements : ",size);

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
void reverse_array(int arr[], int size){
    int i,temp;
    for(i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}
int main(){

    int arr[12];
    int size,i;
    size=12;

    input_array(arr,size);

    printf("\nDisplay Enter volue.\n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    reverse_array(arr,size);
    printf("\nDisplay Array in reverse order.\n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    getch();
}