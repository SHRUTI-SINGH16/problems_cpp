#include<iostream>
using namespace std;



int Sum(int num){
    int sum = 0;
    for(int i=1;i<=num;++i){
        sum=sum+i;
    }
    cout<<sum;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Sum(n);
    return 0;
}