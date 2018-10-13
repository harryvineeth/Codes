/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include <string.h>

long long min(long long a, long long b) 
{   return a < b ? a : b;  } 
  

long long findMinInsertionsDP(char str[], long long n) 
{ 
    long long table[n][n], l, h, gap; 
    memset(table, 0, sizeof(table)); 
  
    for (gap = 1; gap < n; ++gap) 
        for (l = 0, h = gap; h < n; ++l, ++h) 
            table[l][h] = (str[l] == str[h])? 
                          table[l+1][h-1] : 
                          (min(table[l][h-1],  
                           table[l+1][h]) + 1); 
    return table[0][n-1]; 
} 
int main(int argc, char *a[])
{
    long long n;
    scanf("%lld",&n);
    char str[n+1];
    scanf("%s",str);
    printf("%lld", findMinInsertionsDP(str, n));
}
