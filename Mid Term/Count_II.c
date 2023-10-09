#include<stdio.h>
#include<string.h>
int main()
    {
       char s[1001];
       gets(s);
       int l=strlen(s);
       int v=0;
       for(int i=0;i<l;i++)
       {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            v++;
        }
       }
       printf("%d",v);
       

      return 0;
    }
