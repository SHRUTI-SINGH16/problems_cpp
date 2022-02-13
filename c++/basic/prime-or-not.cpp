#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=2;i<=n;++i){
        if(n%i==0){
            cout<<n<<" is not a prime number"<<endl;
            break;
        } 
    }
    if (i==n){
        cout<<n<<" is a prime number"<<endl;
    }    
    return 0;
}