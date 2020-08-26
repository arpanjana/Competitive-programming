#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {20,30,40,40,40,50,100,1100};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    // these iterators generally give you address so inorder to get the index you have to subtracted the pointer from the initial pointer int the array.

    bool present = binary_search(arr,arr+n,key); // for an sorted array its more effiecent way to check if the element is present or not
    // This is only going to tell whether the element is present or not 
    // to find out the index of the element if it's present then use lower_bound to get the index of that particular element.
    if(present)
    {
        cout<<"Present"<<endl;
    }
    else
    {
        cout<<"Absent"<<endl;
    }

    // upper_bound(strictly greater than the given key) and lower_bound(greater or equal to the given key)
    auto lb = lower_bound(arr,arr+n,40); 
    cout<<"Element is present at index: "<<(lb-arr)<<endl;

    auto ub = upper_bound(arr,arr+n,40);
    cout<<"Element is present at index: "<<(ub-arr)<<endl;

    // to find the frequency of an element
    cout<<"Occurance frequency of 40 is: "<<ub-lb<<endl;
    cout<<"Occurance frequency of 1100 is: "<<upper_bound(arr,arr+n,1100)-lower_bound(arr,arr+n,1100)<<endl;

    return 0;
}
