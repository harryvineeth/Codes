#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int g,m,gl=0,ml=0,x;
        cin>>g>>m;
        for(int i=0;i<g;i++)
        {
            cin>>x;
           gl=max(gl,x) ;
        }
        for(int i=0;i<m;i++)
        {
            cin>>x;
            ml=max(ml,x);
        }
        if(ml>gl)
        cout<<"MechaGodzilla"<<endl;
        else
        cout<<"Godzilla"<<endl;
    }
	// your code goes here
	return 0;
}
