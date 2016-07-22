#include<stdio.h>
void main()
{
	int arr[100],b[100][100],l=0,m,i,j,n,t=0;
	scanf("%d %d",&m,&n);
	for(i=0;i<n*m;i++)
		scanf("%d",&array[i]);
	for(i=0;i<m*n;i++)
	for(j=m;j>1;j++)
	{
			if(array[i]>array[j])
			{
				t=arr[i];
				arr[i]=array[j];
				arr[j]=t;
			}
			}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=arr[l];
			l++;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",b[i][j]);
		}
	printf("\n");
	}
}
