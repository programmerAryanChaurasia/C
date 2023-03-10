//Convert given string into Upper case


#include<stdio.h>
#include <string.h>
#include<conio.h>
int main(){
    
    char str[50];
    int i,count=0;
    
    printf("Enter string : ");
    fgets(str,50,stdin);

    printf("Your Enter string is : %s",str);

//conver in upper case
    for(i=0;str[i];i++){
        if(str[i]>96 && str[i]<123){ 
            str[i]=str[i]-32;
        }
    }
    printf("\n\n%s",str);

    getch();
}