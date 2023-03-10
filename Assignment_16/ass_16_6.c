//sum of rows and column of matrix.

#include<stdio.h>
#include<conio.h>
int main(){
    int arr1[3][3];
    int i,j,sum=0;

    printf("Enter matrix volue : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
   //Sum of rows of matrix...
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum+=arr1[i][j];
        }
        printf("Sum of %d th rows is %d\n",i+1,sum);
    }

    printf("\n\n");
    //Sum of columns of matrix...
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum+=arr1[j][i];
        }
        printf("Sum of %d th colums is %d\n",i+1,sum);
    } 
    getch();   
}