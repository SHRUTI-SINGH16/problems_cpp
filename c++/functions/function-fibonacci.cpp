#include<iostream>
using namespace std;


int fibonacci(int num){
    int a,b,i,temp;
    a=0;
    b=1;
    cout<<a<<endl;
    for(i=1;i<=num;++i){
        temp=a+b;
        cout<<temp<<endl;
        b=a;
        a=temp;
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    fibonacci(n);
    return 0;
}