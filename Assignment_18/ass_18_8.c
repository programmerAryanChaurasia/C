//Count number of word in string using function

#include<stdio.h>
#include<conio.h>
#include<string.h>

int wordCount_str(char str[]){

    int i,count=0;

//convert into lower case
   for(i=0;str[i];i++){
        if(str[i]==' '){ 
            count++;
        }
    }
    return count;
}
int main(){
    
    char str[50];
    int num;
    printf("Enter the string :");
    fgets(str,50,stdin);

    num=wordCount_str(str);

    printf("number of Word = %d",num+1);//(num+1) --> because one space(' ') creat between tro word


    getch();
}