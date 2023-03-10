//Convert Given string into lower case

#include<stdio.h>
#include <string.h>
#include<conio.h>
int main(){
    
    char str[50];
    int i,count=0;
    
    printf("Enter string : ");
    fgets(str,50,stdin);

    printf("Your Enter string is : %s",str);

//conver in lower case
    for(i=0;str[i];i++){
        if(str[i]>64 && str[i]<91){ 
            str[i]=str[i]+32;
        }
    }
    printf("\n\n%s",str);

    getch();
}