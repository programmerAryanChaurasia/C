//write a program to print only plaindrom string in list of string

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

    char str[5][20];
    int i,j,count,len; 

    printf("Enter five string :");
    for(i=0;i<5;i++){
        fgets(str[i],20,stdin);
    }
    //Plaindrom case.
    for(i=0;i<5;i++){
        len=strlen(str[i]);
        count=0;
        for(j=0;j<=len/2;j++){
            if(str[i][j]!=str[i][len-j-2]){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%s",str[i]);
        }
    }
 
    getch();
}