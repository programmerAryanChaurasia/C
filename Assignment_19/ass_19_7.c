//Form the list of IP address check wether All IP address are valid.

#include<stdio.h>
#include<string.h>
int main(){

    int i,k,count1=0,count2=0;
    char *x;
    char str[10][20];

    printf("Enter 10 Ip address.\n");
    //take input through user.
    for(i=0;i<10;i++){
        fgets(str[i],20,stdin);
    }

    //Check Valid Ip address.
   
    for(i=0;i<10;i++){
         x=strtok(str[0],".");
         count1=0;
         while(x!=NULL){
            k=atoi(x);
            if(k>0 && k<255){
                count1++;
            }
            x=strtok(NULL,".");
            }
        if(count1!=4){
            count2++;
        }

    }
    if(count2!=10){
        printf("NOT Valid");
    }
    else{
        printf("Valid...");
    }

    getch();
}