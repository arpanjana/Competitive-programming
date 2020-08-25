

/*
You are given two 32-bit numbers, N and M, and two bit positions i and j.
Write a method to set all bits between i and j in N equal to M
(e.g., M becomes a substring of N located at i and starting at j).

Example:
N = 10000000000
M = 10101,i=2,j=6
Output: N = 10001010100
test cases:
N = 15
M = 2
i = 1
j = 3

*/

#include <iostream>
using namespace std;

int clearedRangeOfBits(int n,int i,int j)
{
    int a = (~0)<<(j+1);
    int b = ((1<<i)-1);
    int mask = a|b;
    return n&mask;
}
int replaceBitsNbyM(int n,int m,int i,int j)
{
    int cleared_n = clearedRangeOfBits(n,i,j);
    int mask = (m<<i);
    return (cleared_n|mask);
}

int main() {
    int N,M,i,j;
    cin>>N>>M>>i>>j;
    cout<<replaceBitsNbyM(N,M,i,j)<<endl;
    
    return 0;
}
