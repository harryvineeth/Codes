#include <bits/stdc++.h>
using namespace std;
map<long long,long long> dp;


long long solve(long long n)
{
    if(dp.find(n)!=dp.end())
    return dp[n];
    if(n<12)
    return n;
    dp[n]=solve(n/2)+solve(n/3)+solve(n/4);
    return dp[n];
    }
int main() {
    long long n;
    
   while(scanf("%lld",&n)==1)
   {
      dp.clear();
       printf("%lld\n",solve(n));
   }
	// your code goes here
	return 0;
}
