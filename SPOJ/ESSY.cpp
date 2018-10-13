#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int y=ceil(b/2.0);
    //cout<<y;
    int x=max(a,y);
    for(int i=0;i<x;i++)
    {
        y=rand()%23+98;
        int unicode = y;
        char ch = (char) unicode;
        cout<<ch<<" ";
    }
	// your code goes here
	return 0;
}
