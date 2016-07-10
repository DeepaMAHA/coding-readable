#include<iostream.h>

int checkTwo(int n);
int bye1(int p);
int bye2(int p);
int main()
{
int p;
cout<<"enter the number of players: ";
cin>>p;
bye1(p);
bye2(p);
return 0;
}
int bye1(int p)
{
	int a;
	for(int i=0;i<p;i++)
	{
		a=p-i;
		a=a/2;
		a=a+i;
		if(a%2==0)
		{
			if(checkTwo(a))
			{
				cout<<"the number players of bye given based on first condition(2^n) is:"<<i<<endl;
				return 0;
			}
		}
	}
return 0;
}
int bye2(int p)
{
	int c=0,p1=p;
	for(int i=0;i<p1;i++)
	{
		if(checkTwo(p))
		{
			goto x;		
		}
		if(p%2==0)
		{
			p=p/2;
			continue;
		}
		else
		{
			c++;
			p=(p/2)+1;
		}
	}
	x:cout<<"the number players of bye given based on second condition(even) is:"<<c<<endl;
return 0;
}
int checkTwo(int n)
{
for(int i=0;n!=1;i++)
{
	if(n%2!=0)
	{
		break;
	}
	n=n/2;
}
if(n==1)
	return 1;
	else
	return 0;
	}
