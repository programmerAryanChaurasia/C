//count Total number of Alphabet digit and special character.

#include<stdio.h>
#include <string.h>
#include<conio.h>
int main(){
    
    char str[50];
    int i,alph=0,digit=0,special=0;
    char ch;
    
    printf("Enter string : ");
    fgets(str,50,stdin);

    printf("Your Enter string is : %s",str);

//conver in upper case
    for(i=0;i<(strlen(str));i++){
        if((str[i]>= 'a' && str[i]< 'z')||(str[i]>= 'A' && str[i]< 'Z')){
            alph++;
        }
        else if((str[i]>= '0' && str[i]< '9')){
            digit++;
        }
        else{
            special++;
        }
    }
   
    printf("\nNumber of Alphabet in Given string is %d",alph);
    printf("\nNumber of Digit in Given string is %d",digit);
    printf("\nNumber of special in Given string is %d\n",special-1);//(special-1) --> because last is NULL character.
    getch();
}