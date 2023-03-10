#include<stdio.h>
#include<conio.h>
void odd_natural(int n)
{
    int i;
    for(i=1;i<=n;i++)
        if(i%2!=0)
            printf("%d\t",i);
    
}
int main()
{
    int n;
    printf("\n\nEnter Number : ");
    scanf("%d",&n);;
    odd_natural(2*n);
    getch();

}