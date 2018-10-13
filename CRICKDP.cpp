#include<bits/stdc++.h>
using namespace std;
 
vector<long long int> val;
vector<long long int> cost;
vector<long long int> a;
 
long long int K[100005][505];
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int sum=0;
		int n,m,k;
		a.clear();
		scanf("%d %d %d",&n,&k,&m);
		for(int i=0;i<n;i++)
		{
			long long int num;
			scanf("%lld",&num);
			a.push_back(num);
			sum+=a[i];
		}
		vector<int> dp[100002]={};
		for(int i=0;i<m;i++)
		{
			int l,r,c;
			scanf("%d %d %d",&l,&r,&c);
			l--;
			r--;
			dp[l].push_back(c);
			dp[r+1].push_back(-1*c);
		}
		val.clear();
		cost.clear();
		set<int> s;
		map<int,int> ma;
		for(int i=0;i<n;i++)
		{
			if(dp[i].size()!=0)
			{
				for(int j=0;j<dp[i].size();j++)
				{
					if(dp[i][j]>0)
					{
						s.insert(dp[i][j]);
						ma[dp[i][j]]++;
					}
					else
					{
						ma[-1*dp[i][j]]--;
						if(ma[-1*dp[i][j]]==0)
							s.erase(-1*dp[i][j]);
					}
				}
			}
			if(s.size()!=0)
			{
				if(a[i]<0)
				{
					val.push_back(a[i]);
					cost.push_back(*s.begin());
				}
			}
		}
   		for(int i=0;i<=val.size();i++)
   		{
       		for(int w=0;w<=k;w++)
       		{
           		if (i==0 || w==0)
               		K[i][w]=0;
           		else if(cost[i-1]<=w)
                 	K[i][w]=min(val[i-1]+K[i-1][w-cost[i-1]],K[i-1][w]);
           		else
                	K[i][w]=K[i-1][w];
    		}
   		}
	   	printf("%lld\n",(sum-K[val.size()][k]));
	}
	return 0;
} 