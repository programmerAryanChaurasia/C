//Write a program to count the occurance of a given character in given string.
#include<stdio.h>
#include <string.h>
#include<conio.h>
int main(){
    
    char str[50];
    char ch;
    int i,count=0;

    printf("Enter string : ");
    fgets(str,50,stdin);

    printf("Enter character you want to find occurance in string :\n");
    scanf("%c",&ch);

    printf("Your Enter string is : %s",str);
    printf("\n\n");

    for(i=0;i<(strlen(str));i++){
        if(ch==str[i]){
            count++;
        }
    }
    printf("Occurance is %d",count);
    getch();
}