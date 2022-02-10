#include<iostream>
using namespace std;

int main()
{
    int n,i,factorial;
    cout<<"Enter the number whose factorial is to be found : ";
    cin>>n;
    factorial=1;

    for(i=1;i<=n;++i){
        factorial=factorial*i;

    }
    cout<<"Factorial of "<<n<<" is "<<factorial<<endl;
    return 0;
}