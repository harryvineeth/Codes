#include<set>
#include<map>
#include<stdio.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	for(int j=1;j<=t;j++)
	{
		long long n,m,x,i;
		cin>>n>>m;
		vector<long long > v;
		for(int i=0;i<m;i++)
		{
		    cin>>x;
		    v.push_back(x);
		}
		bool flag=true;
		sort(v.rbegin(),v.rend());
		for( i=0;i<v.size();i++)
		{
		    n-=v[i];
		    if(n<=0)
		    {
		        flag=false;
		        break;
		    }
		}
		if(flag==false)
		{
		    cout<<"Scenario #"<<j<<":"<<endl;
		    cout<<(i+1)<<endl<<endl;
		}
		else
		{
		    cout<<"Scenario #"<<j<<":"<<endl;
		    cout<<"impossible"<<endl<<endl;
		}
	}
	return 0;
} 