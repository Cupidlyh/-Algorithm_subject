#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pre_next(int *next,char *str,int m)
{
    int k=-1;
    next[0]=-1;
    for(int i=1; i<m; i++)
    {
        while(k>-1&&str[k+1]!=str[i])
            k=next[k];
        if(str[k+1]==str[i])
            k++;
        next[i]=k;
    }
}
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        getchar();
        while(t--)
        {
            int n,i,m=0,sum=0;
            char str[200005]= {0},str1[200005]= {0};
            scanf("%d",&n);
            getchar();
            for(i=0; i<n; i++)
                scanf("%c",&str[i]);
            for(i=0; i<n; i++)
            {
                str1[m++]=str[i];
                int next[200005]= {0},j,k=-1,count=0;
                pre_next(next,str1,m);
                for(j=0; j<n; j++)
                {
                    while(k>-1&&str1[k+1]!=str[j])
                        k=next[k];
                    if(str1[k+1]==str[j])
                        k++;
                    if(k==m-1)
                    {
                        count++;
                        j=j-m+1;
                        k=-1;
                    }
                }
                sum=sum+count;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
