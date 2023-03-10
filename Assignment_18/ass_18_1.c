//Write a function to calculate length of string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int length_str(char str[]){
    int i;
    for(i=0;str[i];i++);
    return i;
}
int main(){
    
    int i,len;
    char str[50];
    printf("Enter the string :");
    fgets(str,50,stdin);

    len=length_str(str);

    printf("Length of string = %d",len);

    getch();
}