#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#include <math>
#include <math.h>
using namespace std;
int PrimeTest(long x)
{
    long b = 2;
    while (b <= sqrt(x))
    {
        if (x % b == 0)
        {
            int Answer = 0;
            return Answer;
        }

        b++;
    }
    int Answer = 1;
    return Answer;
}
int main()
    {
    int test;
    cin>>test;
    while(test--)
        {
        long a,b,i;
        cin>>a>>b;                     
        //cout<<a<<b<<endl;
        for(i=a;i<=b;i++)
            {
            
         if (PrimeTest(i)&&(i!=1))
            cout << i<<endl;
        }
            cout<<endl; 
}
    return 0;
}
