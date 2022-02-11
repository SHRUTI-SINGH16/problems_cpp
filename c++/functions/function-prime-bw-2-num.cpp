#include<iostream>
using namespace std;

int prime(int num1,int num2){
    int i,j;
    for(i=num1;i<=num2;++i){
        for(j=2;j<=i;++j){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            cout<<i<<endl;
        }
    }
}

int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    prime(a,b);
    
    return 0;
}