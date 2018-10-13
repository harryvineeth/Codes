#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,sum=0;
        scanf("%lld",&n);
        if(n%2==0)
        {
            sum=((n-2)/2)*((n-2)/2);
        }
        else
        {
            sum=(n-1)*(n-1)/4;
        }
        printf("%lld\n",sum%n);
    }
	// your code goes here
	return 0;
}
