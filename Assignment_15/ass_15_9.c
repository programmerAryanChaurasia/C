//Merse two Sorted Array in descending order...
#include<stdio.h>
#include<conio.h>
void merse(int arr1[], int arr2[], int size1, int size2, int arr[]){

    int i,j,k=0;
    i=size1-1;//12
    j=size2-1;//8

    while(i>=0&&j>=0){
        if(arr1[i]>=arr2[j]){
            arr[k]=arr1[i];
            k++;
            i--;
        }
        else if(arr1[i]<arr2[j]){
            arr[k]=arr2[j];
            k++;
            j--;
        }
    }
    while(i>=0){
        arr[k]=arr1[i];
        k++;
        i--;
    }
    while(j>=0){
        arr[k]=arr2[j];
        k++;
        j--;
    }
}
int main()
{
    int arr1[12]={1,2,3,4,5,6,7,8,20,25,30,90};
    int size1=12;
    int arr2[8]={10,12,13,15,35,50,65,70};
    int size2=8;
    int arr[20];
    int i;

    merse(arr1,arr2,size1,size2,arr);

    printf("\n In Decending order : \n");

    for(i=0;i<20;i++){
        printf("%d\t",arr[i]);
    }
    getch();

}