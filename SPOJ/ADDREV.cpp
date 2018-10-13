#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
 
long reverse(long num)
{
	long rev=0;
	while(num)
	{
		rev=rev*10+num%10;
		num/=10;
	}
	return rev;
}
int main()
    {
    	long n;
    	cin>>n;
    	while(n--)
    	{
    		long a,b,x;
    		cin>>a>>b;
    		x=reverse(reverse(a)+reverse(b));
    		cout<<x<<endl;
    	}
    
    	return 0;
    }