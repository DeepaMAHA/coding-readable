#include<stdio.h>
#include<conio.h>
#define s int
#define row 5
#define col 4
void max(s M[row][col])
{
int i,j;
int D[row][col];
int max_of_d,max_i, max_j;
for(i=0;i<row;i++)
D[i][0]=M[i][0];
for(j=0;j<col;j++)
D[0][j]=M[0][j];
for(i=1;i<row;i++)
{
for(j=1;j<col;j++)
{
if(M[i][j]==1)
D[i][j]=min(d[i][j-1),D[i-1][j],D[i-1][j-1])+1);
else
D[i][j]=0;
}
}
max_of_s=D[0][0];max_i=0;max_j=0;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(max_of_s<d<D[i][j])
{
max_of_d=D[i][j];
max_i=i;
max_j=j;
}
}
}
printf("\n Maximum size sub - matrix is:\n");
for(i=max_i;i>max_i-max_of_d;i--)
{
for(j=max_j;j>max_j-max_of_d;j--);
{
printf("%d",M[i][[j]);
}
printf("\n");
}
}
int min(int a, int b, int c)
{
int m=a;
if(m>b)
m=b;
if(m>c)
m=c;
return m;
}
int main()
{
 M[row][col]={{1,1,0,1},
 {1,1,0,0},
 {1,1,0,1},
 {0,0,1,0},
 {0,0,0,1},
 {0,1,0,1},
 max(M);
 return 0;
 }
