#include<iostream>
#include<algorithm>
#include <stdio.h>
using namespace std;

int main() 
{
    int n,x;
	while(1)
	{
	    int ans=0,mod=0,quo;
	    long long sum=0;
	    scanf("%d",&n);
	    
	    if(n==-1)
	    break;
	    int arr[n+1];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&x);
	        arr[i]=x;
	        sum+=x;
	        
	    }
	    mod=sum%n;
	    quo=sum/n;
	    if(mod==0)
	    {
	        for(int i=0;i<n;i++)
	        {
	            if(arr[i]>quo)
	            ans+=arr[i]-quo;
	        }
	        cout<<ans<<endl;
	    }
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}