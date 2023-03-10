//Write a program to calculate the length of string using pointer.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int length( char *str){
    
    int i=0;

    for(i=0;*(str+i);i++){
        i++;
    }
    return i;
}
int main(){

    char str[20]="aryan chaurasia";
    int len;

    len = length(str);


    printf("Length of string is %d",len+1);//len+1 because index start from 0.

    getch();
}