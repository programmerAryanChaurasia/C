//find given character is alphabet upper case or lower case , digit or special character.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    char ch;

    printf("Enter Character : ");
    scanf("%c",&ch);

    if(ch>='a'&&ch<='z'){
        printf("%c is Lower case",ch);
    }
    else if(ch>='A'&&ch<='Z'){
        printf("%c is Upper case",ch);
    }
    else if(ch>='0'&&ch<='9'){
        printf("%c is Digit case",ch);
    }
    else{
        printf("%c is Digit",ch);
    }
    getch();
}