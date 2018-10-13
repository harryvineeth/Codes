#include <bits/stdc++.h>
using namespace std;
//long long n;
long long tree[1000002];
void update(long long idx ,long long val,long long n){
    while (idx <= n){
        tree[idx] += val;
        idx += (idx & -idx);
    }
}
long long read(long long idx){
    long long sum = 0;
    while (idx > 0){
        sum += tree[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,u,l,r,val,x,q;
        scanf("%lld%lld",&n,&u);
        while(u--)
        {
            scanf("%lld%lld%lld",&l,&r,&val);
            update(l+1,val,n);
            update(r+2,-val,n);
        }
        scanf("%lld",&q);
        while(q--)
        {
            scanf("%lld",&x);
            printf("%lld\n",read(x+1));
        }
        memset(tree,0,1000002);
    }
	// your code goes here
	return 0;
}
