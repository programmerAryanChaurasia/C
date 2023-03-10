//Write a function to swap string to two  char array.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void swap(char **a, char **b){

    char *temp=NULL;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){

    char *w1="Aryan";
    char *w2="Sachin";
      
    swap(&w1,&w2);
    printf("volve after swapping.\n");
    printf("%s\n",w1);
    printf("%s\n",w2);
    getch();
}