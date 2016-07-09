#include<stdio.h>
#include<stdlib.h>

int c(const void *d,const void *n)
{
int *k =(char*)n)-(*(char*)d);
return (*k);
}
int main()
{
int n,i;
scanf("%d",&n);
char str[2*n];
int j=n;
while(i<n)
{
i=0;
str[i]='B';
str[j++]='W';
i++;
}
str[n*2]='\0';
qsort(str,2*nsizeof(char),c);
printf("%s",str);
return 0;
}
