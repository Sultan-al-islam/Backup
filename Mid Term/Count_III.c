#include<stdio.h>
#include<string.h>
int main()
    {
        char s[1001];
        int cnt[26]={0};
        scanf("%s",&s);
        int l=strlen(s);
        for(int i=0;i<l;i++)
        {
           cnt[s[i] - 'a']++;
        }
        for(int i=0;i<26;i++)
        {
            printf("%c - %d\n",i+'a',cnt[i]);

        }
       

      return 0;
    }
