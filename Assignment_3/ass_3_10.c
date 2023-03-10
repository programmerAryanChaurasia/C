#include<stdio.h>
#include<conio.h>
int main(){

    int buy_price,selling_price;
    float k,profit,loss;
    printf("Enter Buy price : ");
    scanf("%d",&buy_price);
    printf("Enter selling price : ");
    scanf("%d",&selling_price);

    if(selling_price>buy_price){
        k=selling_price-buy_price;
        profit=(k*100)/buy_price;
        printf("Profit = %0.1f and presentage of profit = %0.1f %%",k,profit);
    }
    else if (buy_price>selling_price)
    {
        k=buy_price-selling_price;
        loss=(k*100)/buy_price;
        printf("loss = %0.1f and presentage of loss = %0.1f %%",k,loss);
    }
    getch();
}