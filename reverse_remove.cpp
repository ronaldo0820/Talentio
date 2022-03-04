

#include <stdio.h>
#include<string.h>
int main()
{
char s[100];
scanf("%s",s);
int l=strlen(s);
for(int i=0;i<l;i++)
{
    for(int j=i+1;s[j]!='\0';j++)
    {
        if((s[i]==s[j]))
        {
            for(int k=j;s[k]!='\0';k++)
            {
                s[k]=s[k+1];
            }
        }
        else
        {
            continue;
        }
        break;
    }
}
printf("%s \n",s);
int l1=strlen(s);
for(int i=l1-1;i>=0;i--)
{
    printf("%c",s[i]);
}
    return 0;
}
