#include<stdio.h>
#include<string.h>
int fact(int);
int main(){
    char list[10][20]={"aryan chaurasia","sachin chaurasiya","ankit","vikash","juhi","Ajay","rahul","akash","shipra","abhinasha"};
    char username[20];
    int x,flag=0,i;
    printf("enter the user name:");
    gets(username);
    for(i=0;i<10;i++){
        if(strcmp(username,list[i])==0){
            x=fact(i);
            printf("the factorial of %d is %d",i,x);
            flag=1;
        }


    }
    if(flag==0){
            printf("error");
        }

return 0;
}

int fact(int n){
    int f=1,i;
    if(n==0 ||n==1)
        return 1;
    else{
        for(i=1;i<=n;i++){
            f=f*i;
        }
        return f;
    }

}