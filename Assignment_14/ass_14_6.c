//Sort the element stored in 10 size of array...
#include<stdio.h>
#include<conio.h>

int main(){

    int arr[10];
    int i,j,temp;
    

    printf("\n\nEnter 10 volue : ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    //
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
   
    getch();
}