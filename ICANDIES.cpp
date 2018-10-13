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
        long long n,i;
        scanf("%lld",&n);
        for(i=n-1;i>=0;i--)
            {
            if(((i%3)==0)&&(((n-i)%5)==0))
                {
                break;
            }
        }
        //cout<<i<<endl;
        if(i<0)
            printf("Case %d: -1\n",j);
        else
            printf("Case %d: %lld\n",j,i);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

