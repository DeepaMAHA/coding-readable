#include<stdio.h>
int main()
{
char str[100];
int c=0,n[26]={0};
scanf("%s",str);
while(str[c]!='\0')
{
if(str[c]>='a' && str[c]<='z')
n[str[c]-'a']++;
c++;
}
for(c=0;c<26;c++)
{
if(n[c]!=0)
printf("%c occurs %d times in the string ",c+'a',n[c]);
}
return 0;
}
