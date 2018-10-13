#include<set>
#include<map>
#include<stdio.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int primeFactors(int n)
{
    int q=n;
    set<long long>s;
    while (n%2 == 0)
    {
        s.insert(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            s.insert(i);
            n = n/i;
        }
    }
    if (n > 2)
        s.insert(n);
    set<long long>::iterator it;
    for (it = s.begin(); it != s.end(); it++) {
    q=(q*(*it-1))/(*it);  
  }
  return q;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    printf("%d\n",primeFactors(n));
	}
	return 0;
} 