//Print lower triangular of a matrix.

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
   //Lower triangular
   printf("\n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(j<=i){
                printf("%d\t",arr1[i][j]);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    } 

       
}