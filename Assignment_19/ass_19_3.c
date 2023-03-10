//Read and display 2D string array.

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

    int i;
    char str[10][20];

    printf("Enter 10 string.\n");
    //take input through user.
    for(i=0;i<10;i++){
        fgets(str[i],20,stdin);
    }

     printf("\nDisplay the string\n");
    for(i=0;i<10;i++){
        printf("%s",str[i]);
    }
    getch();
}