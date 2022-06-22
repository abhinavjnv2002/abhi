#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a>0)
      printf("%d is positive",a);
    else
      printf("%d is non positive",a);
    getch();
}
