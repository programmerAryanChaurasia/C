#include<stdio.h>
#include<conio.h>
int main(){

    char ch;
    printf("Enter Character :");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        printf("Lower Case Alphabet!....");
    }
    else if(ch>='A'&&ch<='Z'){
        printf("Upper Case Alphabet!....");
    }
    else if(ch>='0'&&ch<='9'){
        printf("given character is a number!....");
    }
    else
        printf("Given character is a special character!");
    
    getch();
}