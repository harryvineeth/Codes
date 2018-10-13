#include <iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	int i;
	while(1)
	{
		int x;
		cin>>x;
		if(x==42)
			break;
		v.push_back(x);
	}
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	
	// your code here

	return 0;
}