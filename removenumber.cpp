#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char s[100],s1[100];
int x=0,y=0;
scanf("%s",s);
int l=strlen(s);
for(int i=0;i<l;i++)
{
    if(s[i]>='0' && s[i]<='9')
    {
       s1[x]=s[i];
       x++;
    }
}
y=atoi(s1);
printf("%d",y);
    return 0;
}
