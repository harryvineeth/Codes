#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,k;
    scanf("%d%d",&x,&k);
    int v[k],i,j;
    for(i=0;i<k;i++)
    {
    scanf("%d",&v[i]);
    if(i>0)
    v[i]+=v[i-1];
    }
    bool dp[x+1];
    dp[0]=true;
    
    for(i=1;i<=x;i++)
    dp[i]=false;

    for(i=0;i<k;i++)
    {
        for(j=v[i];j<=x;j++)
        {
            dp[j]|=dp[j-v[i]];
        }
    }
    if(dp[x])
    printf("YES\n");
    else
    printf("NO\n");
 return 0;
}