#include<stdio.h>
#include<string.h>
int main()
    {
       char s[1001];
       gets(s);
       int cap=0,sam=0;
       int l=strlen(s);
       for(int i=0;i<l;i++)
       {
        if(s[i]>='A' && s[i]<='Z')
        {
            cap++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            sam++;
        }
       }
       printf("%d %d",cap,sam);
      return 0;
    }
