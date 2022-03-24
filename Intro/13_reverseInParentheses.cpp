#include <stdatomic.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <stdint.h>
#include <math.h>

char *solution(char *s) {
    int len=strlen(s),i,j,k,mid,tempt;
    for(i=0;i<len;i++)
    {
        if(s[i]==')')
        {
            if(i==len-1) s[i]=0;
            else{
            for(j=i;j<len-1;j++)
            {
                s[j]=s[j+1];
            }
                s[j]=0;
            }
            len--;
            for(j=i-1;j>=0;j--)
            {
                if(s[j]=='(')
                {
                    break;
                }
            }
            for(k=j;k<len-1;k++)
            {
                s[k]=s[k+1];
            }
            s[k]=0;
            len--;
            i-=2;
            mid=(i+j)/2;
            while(j<=mid)
            {
                tempt=s[i];
                s[i]=s[j];
                s[j]=tempt;
                i--;
                j++;
            }
        }
    }
    return s;
}

int main() {
    char arr[] = "foo(bar)baz";
    printf ("%s", solution(arr));
    return 0;
}
