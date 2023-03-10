//Write a program to print string in reverse order using pointer.

#include<stdio.h>
#include<string.h>
#include<conio.h>
void reverse_str(char *str){
    
    int i;
    for(i=0;*(str+i);i++);
    printf("\n\n");
    for(i=i-1;i>=0;i--){
        printf("%c",*(str+i));
    }

}

int main(){

    char str[20]="Aryan chaurasia";

    reverse_str(str);

    getch();

}
