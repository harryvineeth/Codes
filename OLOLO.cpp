#include <map>
#include <iostream>
#include<cstdio>
using namespace std;

main(){
	long t;
	scanf("%ld",&t);
	long long ans=0,x;
	 for(long long i=0;i<t;i++)
	 {
	     scanf("%lld",&x);
	     ans=ans^x;
	 }
	printf("%lld\n",ans);
}
