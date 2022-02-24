#include<iostream>
using namespace std;

int main()
{
    int n,arr[n];
    cin>>n;

    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    int curr_max=arr[0];
    int curr_min = arr[0];

    for(int i=0;i<n;++i){
        if(arr[i]>curr_max){
            curr_max=arr[i];
        }
    }

    for(int i=0;i<n;++i){
        if(arr[i]<curr_max){
            curr_min=arr[i];
        }
    }

    cout<<curr_max<<endl;
    cout<<curr_min<<endl;
    return 0;
}