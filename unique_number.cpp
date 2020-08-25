#include <iostream>
using namespace std;
// Problem 2N+1
// Given a list of numbers find the unique number among them
// Memory efficent way to solve this problem would be by using bitwise operators
// Here we have use the common property of XOR 
//i.e., if we take XOR of a number with itself the result would be 0 in that case
// You can check this by verify 10^10.
int main()
{	
	int n;
	cin>>n;
	int unique_number = 0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		unique_number = unique_number ^ x;
	}
	cout<<unique_number<<endl;
	return 0;
}