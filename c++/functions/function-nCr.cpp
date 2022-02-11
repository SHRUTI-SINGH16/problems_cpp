#include<iostream>
using namespace std;


int factorial(int num){
    int i,fact;
    fact=1;
    for(i=1;i<=num;++i){
        fact = fact * i;
    }
    return fact;
}

int nCr(int num_n, int num_r){
    int ans = factorial(num_n)/(factorial(num_r)*factorial(num_n-num_r));
    cout<<ans<<endl;

}

int main()
{
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;

    nCr(n,r);
    return 0;
}