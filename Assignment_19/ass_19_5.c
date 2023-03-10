//Suppose we have a list of email address chech wecher all email address contain '@' print the odd email out.
//uan email ko print karo jisame '@' nahi h.


#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

    int i,j,count;
    char str[10][20];

    printf("Enter 10 Email address.\n");
    //take input through user.
    for(i=0;i<10;i++){
        fgets(str[i],20,stdin);
    }

    
    for(i=0;i<10;i++){
        count=0;
        for(j=0;str[i][j];j++){
            if(str[i][j]=='@'){
                count++;
            }
        }
        if(count!=0){
            printf("Gmail = %s",str[i]);
        }
    }
    getch();
}