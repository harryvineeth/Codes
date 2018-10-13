#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
	    long long n;
	    scanf("%lld",&n);
	    printf("%lld\n",(n*(n+1))/6);
	}
	return 0;
}
