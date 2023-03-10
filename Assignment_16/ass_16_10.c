//Find the row with maximum number of 1's...
//Matrix me hame uas row ko kojana h jisame sabase jayada 1 ho.

#include<stdio.h>
#include<conio.h>
int main(){
    int arr1[3][3];
    int i,j,count,max=0;

    printf("Enter matrix volue : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
   //maximum number of 1'S in rows
    for(i=0;i<3;i++){
        count=0;
        for(j=0;j<3;j++){
           if(arr1[i][j]==1){
            count++;
           }
        }
        if(max<count){
            max=count;
        }
    }
    printf("Maximun number of 1's in any one rows is equql to %d",max);

    getch();   
}