#include <map>
#include <iostream>
#include<cstdio>
using namespace std;

const long long M = 1000000007; // modulo
map<long long , long long> F;

long long  f(long long n) {
	if (F.count(n)) return F[n];
	long long k=n/2;
	if (n%2==0) { // n=2*k
		return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;
	} else { // n=2*k+1
		return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
	}
}

main(){
	long long t;
	cin>>t;
	F[0]=F[1]=1;
	while(t--)
	{
	 long long n,m,ans=0,h=0,l=0;
	 scanf("%lld%lld",&n,&m);
	 ans = (f(m+1) - f(n))%M;
  if(ans<0)
    ans = ans+M;
  ans = ans % M;
  cout<<ans<<endl;
}
}

