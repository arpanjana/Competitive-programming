#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {11,83,9,70,44};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    auto it = find(arr,arr+n,key); // This will gives me the address of that particualar element
    int index = it-arr;
    if(index==n){
        cout<<"Element doesn't found"<<endl;
    }
    else{
        cout<<"Element is present at index "<<index<<endl;
    }



    return 0;
}
