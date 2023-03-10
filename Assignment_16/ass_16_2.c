//Product of two matrix store in another matrix.

#include<stdio.h>
#include<conio.h>
int main(){
    int arr1[3][3],arr2[3][3],arr[3][3];
    int i,j,sum,k;

    printf("Enter first matrix volue : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter second matrix volue : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    //Product of two matrix.
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0;
            for(k=0;k<3;k++){
                sum=sum+arr1[i][k]*arr2[k][j];
            }
            arr[i][j]=sum;
        }
    }
   //Print the data of matrix...
    printf("sum of two mattrix : \n");  
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    getch();
}