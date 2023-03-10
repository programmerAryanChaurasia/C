#include<stdio.h>
#include<conio.h>
float area(float r){
    return 3.14*r*r;
}
int main ()
{
    float r;
    printf("\n\n\nEnter radius of circle :");
    scanf("%f",&r);

    printf("Area of circle is %0.2f",area(r));
    getch();
}