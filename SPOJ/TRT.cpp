#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int dp[2001][2001];
int arr[2001];
int calculate(int be,int end,int year)
    {
    if(be>end)
        return 0;
    if(dp[be][end]!=-1)
        return dp[be][end];
    return (dp[be][end]=max(calculate(be+1,end,year+1)+year*arr[be],calculate(be,end-1,year+1)+year*arr[end]));
}

int main() {
    int i,n,j;
    cin>>n;
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            dp[i][j]=-1;
    }
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<calculate(0,n-1,1)<<endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
