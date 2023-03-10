//Given list of wort follow by two words the task is to find the minnium distancebetween the two word in list of words.

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
#include<limits.h>
int main(){
    int dist=INT_MAX,i,j;
    int min=dist,count=0;
    char str[5][20]={"Aryan","is","a","good","boy"};
    char w1[20]="Aryan";
    char w2[20]="boy";

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            dist=abs(i-j);
            if(((strcmp(w1,str[i])==0)&&(strcmp(w2,str[j])==0))||((strcmp(w2,str[i])==0)&&(strcmp(w1,str[j])==0))){
                if(dist<min){
                    min=dist;
                    count++;
                }
            
            }
        }
    }
    if(count!=0){
        printf("Minum distance = %d",min);
    }
    else{
        printf("Given two word are not avalible in string");
    }
    getch();
    
}