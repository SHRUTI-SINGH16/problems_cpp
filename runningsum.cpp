#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n],new_arr[n];
    for(i=0;i<n;++i){
        cin>>a[i];
    }
    int sum=0;
    cout<<"[";
    for(i=0;i<n;++i){
        sum =  sum + a[i];
        new_arr[i] = sum;
    }
    for(i=0;i<n;++i){
        cout<<new_arr[i]<<", ";

    }
    cout<<"]";

    
    return 0;
}