#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter any alphabet  : ");
    scanf("%c",&c);
    if (c>='A'&c<='Z')
        printf("%c is in uppercase",c);
    else
      printf("%c is in lowercase",c);
    getch();
}
