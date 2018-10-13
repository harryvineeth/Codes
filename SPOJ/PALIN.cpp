#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int pallindrome(long num)
    {
     long  n, digit, rev = 0;
     n = num;
     do
     {
         digit = num%10;
         rev = (rev*10) + digit;
         num = num/10;
     }while (num!=0);
       if (n==rev)
       return 1;
     else
       return 0;
}

int main() {
    int test;
    cin>>test;
    while(test--)
        {
        long num,i;
        cin>>num;
        for(i=num+1;1;i++)
            {
            if(pallindrome(i))
                {
                break;
            }
        }
        cout<<i<<endl;
    }
  
    return 0;
}
