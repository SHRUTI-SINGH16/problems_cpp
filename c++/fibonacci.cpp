#include<iostream>
using namespace std;

int main()
{
    int n,i,a,b,term;
    cout<<"Enter the value of n: ";
    cin>>n;

    a=0;
    b=1;
    cout<<a<<endl;
    term=0;
    for(i=1;i<=n;++i){
        term=a+b;
        cout<<term<<endl;
        b=a;
        a=term;
        
    }

    return 0;
}