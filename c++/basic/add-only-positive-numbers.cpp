#include<iostream>
using namespace std;

int main()
{
    int n,sum;
    cin>>n;
    sum=0;
    while(n>0){
        sum=sum+n;
        cin>>n;
    }
    cout<<"The sum is = "<<sum<<endl;
    return 0;
}

