#include<stdio.h>
#include<conio.h>
int main()
{
    int cp,sp,profit_per,loss_per;
    printf("Enter cost price and selling price: ");
    scanf("%d%d",&cp,&sp);
    profit_per=((sp-cp)*100)/cp;
    loss_per=((cp-sp)*100)/cp;
    if (cp>sp)
        printf("loss percentage is %d ",loss_per);
    else
      printf("profit percentage is %d ",profit_per);
    getch();
}
