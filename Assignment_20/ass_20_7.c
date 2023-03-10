//Write a program to count the numbe of vowels and constants in string using pointer.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void alphabet(char *str){

    int i,j,count=0;
    for(i=0;*(str+i);i++);
    for(j=0;*(str+j);j++){
        if(*(str+j)=='a'||*(str+j)=='e'||*(str+j)=='j'||*(str+j)=='o'||*(str+j)=='u'||*(str+j)=='A'||*(str+j)=='E'||*(str+j)=='I'||*(str+j)=='O'||*(str+j)=='U'){
            count++;
        }
    }
    printf("\nNumber of length = %d",i+1);
    printf("\nNumber of vowel = %d",count);
    printf("\nNumber of constant in string = %d\n\n",i+1-count);
}
int main(){

    int len;
    char str[20]="aryan chaurasia";
    alphabet(str);

    getch();
}