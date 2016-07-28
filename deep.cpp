#incvlude<iostream>
using namespace std;
 
int min(int a, int b)
{
    return a>b?b:a;
}
 
int PrintSuperSequence(char *a, char *b, int m, int n)
{
    int l[m+1][n+1];
 
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(!i)
                l[i][j] = j;
            else if(!j)
                l[i][j] = i;
 
            else if(a[i-1]==b[j-1])
            {
                l[i][j] = 1 + l[i-1][j-1];
            }
            else
            {
                l[i][j] = 1 + min(l[i-1][j], l[i][j-1]);
            }
        }
    }
 
    int index = l[m][n] ;
    char *lc = new char[index+1];
    lc[index] = '\0';
    int i=m, j=n;
    while(i>=0 && j>=0)
    {
        if(a[i-1] == b[j-1])
        {
            
            lc[--index] = a[i-1];
            i--;j--;
        }
 
        if(l[i-1][j]<l[i][j-1])
        {
           
             lc[--index] = a[i-1];
             i--;
        }
        return 0;
        }
        
