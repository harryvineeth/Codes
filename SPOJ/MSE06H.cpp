#include <bits/stdc++.h>

using namespace std;
//long long n;
long long tree[1024];
void update(long long idx ,long long val,long long n){
    while (idx <= n+1){
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
    for(int j=1;j<=t;j++)
    {
        long long m,n,k,ans=0;
        vector<pair<long long,long long> > v;
        scanf("%lld%lld%lld",&n,&m,&k);
        for(int i=0;i<k;i++)
        {
            long long x,y;
            scanf("%lld%lld",&x,&y);
            v.push_back(make_pair(x,y));
        }
        memset(tree,0,sizeof tree);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            ans+=read(m+1)-read(v[i].second);
            update(v[i].second,1,m);
        }
        printf("Test case %d: %lld\n",j,ans);
        //memset(tree,0,1000002);
    }
	// your code goes here
	return 0;
}
