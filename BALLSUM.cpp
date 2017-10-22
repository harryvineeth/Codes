#include <bits/stdc++.h>
using namespace std;
long long gcd ( long long  a, long long b )
{
  long long c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}
int main() {
    long long n,k,p,q;
    cin>>n>>k;
    while(n!=-1&&k!=-1)
    {
    	if(k<=2)
    	cout<<0<<endl;
        else if(k>2)
        {
        	long long r=(k-1)/2;
            p=r*k-r*(r+1);
            if(n%2==0)
            q=(n/2)*(n-1);
            else
            q = ((n-1)/2) * n;
            while(true) {
				long long g=gcd(p,q);
				if(g==1) break;
				p/=g;
				q/=g;
				if(p==1||q==1)break;
			}
			if(q==1) printf("%lld\n", p);
			printf("%lld/%lld\n",p,q);
        }
        else
        cout<<0<<endl;
        
        cin>>n>>k;
    }
	// your code goes here
	return 0;
}
