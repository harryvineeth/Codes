#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,ans=0;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        while(a&(a-1))
        {
            a=a/2;
            ans++;
        }
        if(b>a)
        {
            ans+=log2(b/a);
        }
        else if(a>b)
        {
            ans+=log2(a/b);
        }
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
