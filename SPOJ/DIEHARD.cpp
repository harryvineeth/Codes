#include<iostream>
#include<algorithm>
#include <stdio.h>
using namespace std;
int dp[1001][1200];
int solve(int n,int m)
{
	if(n<=0||m<=0)
	return -1;
	else
	{
	if(dp[n][m]==-1)
	dp[n][m]=max(solve(n-2,m-8)+2,solve(n-17,m+7)+2);
    return dp[n][m];
}
}
int main() 
{
	int h,a,i,j,t;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d %d",&h,&a);
	for(i=h;i>0;i--)
	{
		for(j=a+100;j>0;j--)
		dp[i][j]=-1;
	}
	printf("\n%d",solve(h,a));
	}
	return 0;
}