#include<stdio.h>
int main()
{
int x,x1,x2,x3,y1,y2,y3,y;
int a1,a2,a3,a4,b1,b2,b3,b4;

scanf("%d,%d",&x,&y);
printf("First point is  (%d,%d)",x,y);

x1=x;
scanf("%d",&y1);
printf("the second point is (%d,%d)",x1,y1);

y2=y1;

scanf("%d",&x2);
printf("third point is (%d,%d)",x2,y2);

x3=x2;
y3=y2;
printf("the fourth point is (%d,%d)",x3,y3);

printf("Second rectangle");
scanf("%d,%d",&a1,&b1);
printf("\nFirst point is  (%d,%d)",a1,b1);

a2=a1;

printf("\nthe second point is (%d,%d)",a2,b2);

b3=b1;

printf("\nthird point is (%d,%d)",a3,b3);

a4=a3;
b4=b2;
printf("\nfourth point is (%d,%d)",a4,b4);


if((x<=a1 && x1<=b2) && (x2<=b3 && x3<=b4))
{
printf("false");
}
else
printf(" true");

}
