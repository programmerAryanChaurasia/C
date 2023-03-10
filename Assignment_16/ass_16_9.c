//Determine given matrix is sparse matrix or not.
//If a matrix contain more then zero number compare to non zero number that is know as sparse matrix.

#include<stdio.h>
#include<conio.h>
int main(){
    int arr1[3][3];
    int i,j,count=0;

    printf("Enter matrix volue : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
   //Check sparse matrix...
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr1[i][j]==0){
              count++;
            }
        }
    } 
    //if number of zero more then (rows*column)/2 then matrix is sparse matrix.
    //if(count>(rows*column)/2)  --->  then matrix is sparse matrix.
    //in this question row = 3, and column = 3
    if(count>(3*3/2)){
        printf("Given matrix is sparse matrix");
    }     
    else{
        printf("Given matrix is not a sparse matrix");
    }
    getch();
}