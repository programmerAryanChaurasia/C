//Count vowels in given string

#include<stdio.h>
#include <string.h>
#include<conio.h>
int main(){
    
    char str[50];
    int i,count=0;
    
    printf("Enter string : ");
    fgets(str,50,stdin);

    printf("Your Enter string is : %s",str);

//count vowels...
    for(i=0;i<(strlen(str));i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    printf("Number of vowels in given string is %d",count);

    getch();
}