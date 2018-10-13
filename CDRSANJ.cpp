#include <iostream>
using namespace std;

int main() {
	int x,ans=0;
	cin>>x;
	 if(x==1)
	    {
	        ans=1;
	    }
	    else
	    {
	while(x>0)
	{
		if(x%2==0)
			{
			    ans+=2;
			    x/=2;
			}
		else
		{
		    break;
		}
	}}
	cout<<ans<<endl;
	return 0;
}
