#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d,e,w,x=0;
    scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&w);
    x=a*2+b*4+c*8+d*16+e*32;
    if(w%2!=0)
    cout<<"NO"<<endl;
    else
    {
        if(w>x)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    //cout<<b*b-a*a<<endl;
	// your code goes here
	return 0;
}
