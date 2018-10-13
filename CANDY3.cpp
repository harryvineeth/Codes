#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,ans=0;
        scanf("%lld",&n);
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&x);
            ans=(ans+x)%n;
        }
        if(ans%n==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	// your code goes here
	return 0;
}
