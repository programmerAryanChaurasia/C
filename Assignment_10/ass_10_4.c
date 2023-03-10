#include<stdio.h>
#include<conio.h>
void natural(int n)
{
    int i=0;
    for(i=1;i<=n;i++)
        printf("%d\t",i);
    
}
int main()
{
    int n;
    printf("\n\nEnter Number : ");
    scanf("%d",&n);
    natural(n);
    getch();

}