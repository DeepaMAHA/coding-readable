#include<stdio.h>
#include<string.h>
void dup(char a[]);
 
void main()
{
 int i;
 char a[30];
 printf("Enter string:");
 scanf("%s",a);
 dup(a);
 printf("%s",a);
 
}
void dup(char a[])
{
  int i,j,n,flag,k;
  char temp;
  n=strlen(a);
 
  for(i=0;i<n;i++)
  {
    for(j=k=i+1;k<=n;)
     {
       if(a[i]!=a[k])
	{
	 a[j]=a[k];
	 j++;
	 k++;
	}
      else
       {
 
	k++;
       }
    }
    }
    }
