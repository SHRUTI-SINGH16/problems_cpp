#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=0;i<t;++i){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
         
        vector<int> ans;
        sort(arr, arr + n);

        

        cout<<"Case #"<<j<<": "<<ans.size()<<endl;
    }
    return 0;
}