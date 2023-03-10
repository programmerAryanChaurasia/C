//Write a function to Reverse the string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void reverse_str(char str[]){

    int i,len;
    char temp;

    len=strlen(str);
    for(i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-1-i]=temp;
    }
}
int main(){
    
    char str[50];
    printf("Enter the string :");
    fgets(str,50,stdin);

    reverse_str(str);

    printf("Reverse of string = %s",str);

    getch();
}