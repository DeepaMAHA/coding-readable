#include<stdio.h>
struct time
{
int hours;
int mins;
int sec;
};
void diff(struct time hours,struct time mins,struct time sec);
int main()
{
struct time t1,t2,diff;
printf("start time\n");
scanf("%d\n%d\n%d",&t1.hours,&t1.mins,&t1.sec);
printf("stop time");
scanf("%d\n%d\n%d",&t2.hours,&t2.mins,&t2sec);
diff(t1,t2,&diff);
printf("%d%d%d",diff.hours,diff.mins,diff.sec);
return 0;
}

