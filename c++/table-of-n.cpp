#include<iostream>
using namespace std;

int main()
{
    int i,n,product;
    cin>>n;
    for(i=1;i<=10;++i){
        product = n * i;
        cout<<n<<" * "<<i<<" = "<<product<<endl;
    }
    return 0;
}