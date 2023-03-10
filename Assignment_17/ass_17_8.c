//Copy one string into another string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    
    char str[50];
    char new_str[50];
    int i;

    printf("Enter String : ");
    fgets(str,50,stdin);

    for(i=0;i<(strlen(str));i++){
        new_str[i]=str[i];
    }
    printf("%s",new_str);

    getch();
}
