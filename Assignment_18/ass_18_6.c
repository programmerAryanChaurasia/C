//write a function to check string is alpha numeric or not.
//Alpha numeric string Means string atleast contain one digit and one character.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void check_str(char str[]){

    int alpha=0,digit=0,i;

//Check alphanumeric or not

   for(i=0;str[i];i++){
        if((str[i]>'a' && str[i]<'z')||(str[i]>'A' && str[i]<'Z')){ 
            alpha++;
        }
        else if(str[i]>'0' && str[i]<'9'){ 
            digit++;
        }
    }
    if(alpha&&digit){
        printf("Given String is Alpha Numeric");
    }
    else{
        printf("Given string is not a Alpha numeric");
    }
}

int main(){
    
    char str[50];
    printf("Enter the string :");
    fgets(str,50,stdin);

    check_str(str);
    
    getch();
}