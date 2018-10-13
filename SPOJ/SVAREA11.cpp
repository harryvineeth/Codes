#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
        {
        long long n,a,pfinal,ans=0,p,q;
        scanf("%lld%lld",&n,&a);
        for(int i=1;i<=a;i++)
            {
            scanf("%lld%lld",&p,&q);
            if(i==1)
                {
                ans++;
                pfinal=q;
            }
            else
                {
                if(p>=pfinal)
                    {
                    pfinal=q;
                }
                else
                    {
                    pfinal=q;
                    ans++;
                }
            }
        }
        if(ans<=n)
            printf("Plan %d: Yes\n",j);
        else
            printf("Plan %d: No\n",j);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

