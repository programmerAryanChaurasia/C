//Sort the string Array in assending order;

#include<stdio.h>
#include <string.h>
#include<conio.h>
int main(){
    
    char str[50];
    int i,j;
    char temp;
    
    printf("Enter string : ");
    fgets(str,50,stdin);

    printf("Your Enter string is : %s",str);
 
    for(i=1;i<(strlen(str));i++){
        for(j=0;j<(strlen(str)-1);j++){
            if(str[j]>str[j+1]){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    printf("After sorting string : %s",str);

    getch();
}