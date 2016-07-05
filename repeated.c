#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
int count[30]={0},i=0;
scanf("%s",a);
while(a!='\0')
{
if(a[i]>='a'&&a[i]<='z')
count[a[i]-'a']++;
i++;
}
for(i=0;i<26;i++)
{
if(count[i]!=0)
printf("%d",count[i]);
}
return 0;
}

