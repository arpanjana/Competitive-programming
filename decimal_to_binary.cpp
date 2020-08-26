#include<iostream>

using namespace std;

int decimalToBinary(int n)
{
    int res = 0;
    int p = 1;
    
    while(n>0)
    {
        int last_bit = n&1;
        res += p*last_bit;
        p = p*10;
        n = n>>1;
    }
    return res;
}


int main()
{
    int num;
    cin>>num;
    cout<<decimalToBinary(num)<<endl;
    return 0;
}