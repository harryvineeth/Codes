#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,x,ans=0,m1;
        scanf("%lld",&n);
        multiset <int> m;
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&x);
            m.insert(x);
        }
        multiset <int>:: iterator it ,it1;
        it=--m.end();
        scanf("%lld",&m1);
        for(long long i=0;i<m1;i++)
        {
            ans+=*it;
            x=*it;
            x--;
            //cout<<*it<<endl;
            m.erase(it);
            m.insert(x);
            it=--m.end();
        }
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
