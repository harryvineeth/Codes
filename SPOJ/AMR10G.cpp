#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,i,j;
        long long m=1000000000,sum=0;
        scanf("%d%d",&n,&k);
        long long arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        sort(arr,arr+n);
        for(i=0;i+k<=n;i++)
        {
            sum=arr[i+k-1]-arr[i];
            m=min(sum,m);
        }
        printf("%lld\n",m);
    }
    
    return 0;
}


