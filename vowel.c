#include<stdio.h>
int main()
{
char a;
scanf("%s",a);
if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='o'||a=='O'||a=='u'||a=='U')
printf("Vowel\n");
else
printf("Consonant");
return 0;
}
