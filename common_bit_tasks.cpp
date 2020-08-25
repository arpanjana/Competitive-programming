#include <iostream>
using namespace std;
bool isOdd(int n){
    return (n&1);
}
//GetBit and setBit
bool getBit(int n,int i)
{
    int mask = (1<<i);
    return ((n&mask)>0?0:1);
}

int setBit(int n,int i)
{
    int mask = (1<<i);
    return (n|mask);
}

// ClearBit and updateBit
int clearBit(int n,int i)
{
    int mask = ~(1<<i);
    return (n&mask);
}

int updateBit(int n,int i,int v)
{
    int clear_n = clearBit(n,i);
    int mask = (v<<i);
    return (clear_n|mask);
}

// clear Range of Bits
int clearLastIBits(int n,int i)
{
    int mask = (-1<<i);
    return (n&mask);
}

int clearRangeItoJ(int n,int i,int j)
{
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    return n&mask;
}



int main() {
    int num;
    //int ibit; 
    // Verifying 
    cin>>num;
   // cin>>ibit;
    // cout<<getBit(num,ibit)<<endl;
    // cout<<setBit(num,ibit)<<endl;
    // cout<<clearBit(num,ibit)<<endl;
    // cout<<updateBit(num,ibit,0)<<endl;
    // cout<<updateBit(6, 2, 0)<<endl;
    // cout<<updateBit(6, 5, 1)<<endl;
   // cout<<clearLastIBits(num,ibit); // from pos i+1 to 0
    int i = 1,j = 3;
    cout<<clearRangeItoJ(num,i,j);
    return 0;
}
