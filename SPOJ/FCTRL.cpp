#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
    {
    	long test;
    	cin>>test;
    	while(test--)
    	{
    		long num,i,count=0;
    		cin>>num;
    		for(i=1;(num/pow(5,i))!=0;i++)
    		{
    			count+=num/(pow(5,i));
    		}
    		cout<<count<<endl;
    	}
    	return 0;
    }