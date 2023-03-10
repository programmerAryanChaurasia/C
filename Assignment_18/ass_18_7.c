//write a function to chech string is Pliandrom or not.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int plaindrom_str(char str[]){

    int i,len;
    char temp;

    len=strlen(str);
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-2-i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    
    char str[50];
    int plaindrom;

    printf("Enter the string :");
    fgets(str,50,stdin);

    plaindrom=plaindrom_str(str);

    if(plaindrom){
        printf("String is plaindrom.");
    }
    else{
        printf("String is not plaindrom.");
    }

    getch();
}