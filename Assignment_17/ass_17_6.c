//REVERSE THE STRING

#include<stdio.h>
#include <string.h>
#include<conio.h>
int main(){
    
    char str[50];
    int i,count=0;
    char ch;
    
    printf("Enter string : ");
    fgets(str,50,stdin);

    printf("Your Enter string is : %s",str);

//conver in upper case
    for(i=0;i<(strlen(str)/2);i++){
        ch=str[i];
        str[i]=str[(strlen(str))-i-2];
        str[(strlen(str))-i-2]=ch;
    }
   
    printf("\n\n%s",str);

    getch();
}