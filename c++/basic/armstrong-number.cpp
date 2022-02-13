#include<iostream>
using namespace std;

int main()
{
    int n,sum,num;
    cout<<"Enter a number n: ";
    cin>>n;
    sum = 0;
    num=n;
    while(n>0){
        int rem = n%10;
        sum = sum + rem*rem*rem;
        n=n/10;
    }

    if (sum==num){
        cout<<num<<" is an armstrong number";
    } else {
        cout<<num<<" is not an armstrong number";

    }
    return 0;
}