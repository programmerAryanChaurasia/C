//Transpose of a matrix 
//Sum of two Matrix and store in another array each of order 3*3

#include<stdio.h>
#include<conio.h>
int main(){
    int arr1[3][3],arr[3][3];
    int i,j;

    printf("Enter first matrix volue : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
   //Transpose of matrix...
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr[i][j]=arr1[j][i];
        }
    } 
    printf("print transpose of two mattrix : \n");  
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}