#include<stdio.h>
#include<conio.h>
int main(){

    char ch;
    printf("Enter Alphabet :");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        printf("Lower Case!....");
    }
    else if(ch>='A'&&ch<='Z'){
        printf("Upper Case!....");
    }
    else
        printf("Please enter Valid Alphabet...");
    
    getch();
}