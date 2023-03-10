//length of string
#include<stdio.h>
#include<conio.h>
int main(){
    int i;
    char str[]="Aryan chaurasia is a good boy";
    for(i=0;str[i];i++);

    printf("Length of string is %d",i);
    getch();
}