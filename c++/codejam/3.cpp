#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;++j){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
         
        vector<int> ans;
        sort(arr, arr + n);

        
        for(int i=0;i<n;++i){
            if(arr[i]>=(i+1)){
                ans.push_back(i+1);
            }
        }

        cout<<"Case #"<<j+1<<": "<<ans.size()<<endl;
    }
    return 0;
}