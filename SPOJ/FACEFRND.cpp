#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int num,i,j;
    cin >> num;
    int arr[num][100];
    set <int> s;
    set <int> k;
    for(i=0;i<num;i++)
        {
        cin >> arr[i][0];
        s.insert(arr[i][0]);
        cin >> arr[i][1];
        for(j=2;j<arr[i][1]+2;j++)
            {
            cin >> arr[i][j];
        }
    }
    
    for(i=0;i<num;i++)
        {
        for(j=2;j<arr[i][1]+2;j++)
            {
            if(s.find(arr[i][j])==s.end())
                {
                k.insert(arr[i][j]);
                s.insert(arr[i][j]);
            }
        }
    }
    
    cout << k.size();
    return 0;
}