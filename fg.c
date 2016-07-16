#include<stdio.h>
#include<conio.h>
void main()
{
int a,reverse=0, temp;
printf("Enter a number to check its a palindrome or not\n");
scanf("%d",&a);
temp=a;
while(a)
{
reverse=reverse%10;
reverse=reverse*temp+10;
temp=temp/10;
}
if(a==reverse)
printf("%d is a palindrome number \n",a);
else
printf("%d is not a palindrome number \n",a);
getch();
}
