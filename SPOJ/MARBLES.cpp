#include <bits/stdc++.h>
using namespace std;
 
int min(int a, int b)
{
	return (a<b)? a: b;
}
 
unsigned long long binomialCoeff(long long n, long long k)
{
    unsigned long long ans=1;
    if(k>n/2)
    k=n-k;
    for(long long i=0;i<k;i++)
    {
        ans*=(n-i);
        ans/=(i+1);
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long n,k;
        cin>>n>>k;
        cout<<binomialCoeff(n-1,k-1)<<endl;
    }
	// your code goes here
	return 0;
}