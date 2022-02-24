#include<iostream>
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

    int curr_min = arr[0];
    int curr_max = arr[0];
    for(i=0;i<n;++i){
        if(arr[i]>curr_max){
            curr_max=arr[i];
        } else {
            curr_max=curr_max;
        }
    }

    for(i=0;i<n;++i){
        if(arr[i]<curr_min){
            curr_max=arr[i];
        } else {
            curr_min = curr_min;
        }
    }

    cout<<"Max: "<<curr_max<<endl;
    cout<<"Min: "<<curr_min<<endl;
    return 0;
}