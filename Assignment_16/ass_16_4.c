//Sum of right dignol of matrix.

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
   //Sum of right dignool of matrix...
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i+j==2){
                sum+=arr1[i][j];
            }
        }
    } 
    printf("Sum of right digonal of mattrix : ");  
    
    printf("%d\t",sum);
       
}