#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,ans,i;
    cin>>n;
    ans=n;
    for(i=2;i<=sqrt(n);i++)
    {
        ans+=(n-(i*i))/i+(1);
    }
    cout<<ans<<endl;
	// your code goes here
	return 0;
}
