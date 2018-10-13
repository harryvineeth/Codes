#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d,e,w,v=0;
    scanf("%lld%lld",&a,&b);
    v=a^b;
    v|=v>>1;
    v|=v>>2;
    v|=v>>4;
    v|=v>>8;
    v|=v>>16;
    cout<<v;
	// your code goes here
	return 0;
}
