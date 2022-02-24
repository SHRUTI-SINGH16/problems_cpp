#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    
    for(i=0;i<n;++i){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    int curr_min = INT_MAX;
    int curr_max = INT_MIN;
    for(i=0;i<n;++i){
        curr_max = max(curr_max,arr[i]);
    }

    for(i=0;i<n;++i){
        curr_min = min(curr_min,arr[i]);
    }

    cout<<"Max: "<<curr_max<<endl;
    cout<<"Min: "<<curr_min<<endl;
    return 0;
}