#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a[20],b[20],g,m,f,n;
int c,d;
printf("enter your name:");
//scanf("%s",&a);
//scanf("%[^\n]",&a);
gets(a);
printf("\nenter product name:");
scanf("%s",&b);
printf("\nenter your mobile number:");
scanf("%d",&n);
printf("\nenter price:");
scanf(" %d",&c);

printf("\nenter Qty:");
scanf(" %d",&d);

printf("\ngender: (m) male (f)female\n");
scanf(" %c",&g);
int total;
total = c*d;
//printf("thank you for shopping")
if (g == 'm')
{
printf("\nThank you for shopping Mr. %s",a);
printf("\nTotal =%d",total);

if (total >= 1500)
{
printf("\nDiscount = 15%");
printf("\nNet price = %d", total*15/100);
}
else if(total >= 1000)
{
printf("\nDiscount = 10%");
printf("Net price = %d", total*10/100);
}
else if (total >= 500)
{
printf("\nDiscount = 5%");
printf("\nNet price = %d", total*5/100);
}
else if (total < 500)
{
printf("\nDiscount = 0%");
printf("\nNet price = %d", total);
}
}
else if (g == 'f')
{
printf("\nThank you for shopping Mrs. %s",a);
if(total >= 1500)
{
printf("\nDiscount = 15%");
printf("\nNet price = %d", total*15/100);
}
else if(total >= 1000)
{
printf("\nDiscount = 10%");
printf("\nNet price = %d", total*10/100);
}
else if (total >= 500)
{
printf("\nDiscount = 5%");
printf("\nNet price = %d", total*5/100);
}
else if (total < 500)
{
printf("\nDiscount = 0%");
printf("\nNet price = %d", total);
}
}
else
{
printf("\n INVALID");
}
getch();
}