#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(k)
            cout<<"Pagfloyd wins."<<endl;
        else
            cout<<"Airborne wins."<<endl;
    }
    
    return 0;
}

