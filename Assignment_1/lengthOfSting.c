#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){

    char a[100];
    int len;
    printf("Enter A String to Calculate its length : ");
    gets(a);
    len = strlen(a);
    printf("\n Length of String is %d",len);
   getch(); 
}