#include<iostream>
using namespace std;


int oddeven(int num){
    if(num%2==0){
        cout<<"even"<<endl;
    } else {
        cout<<"odd"<<endl;
    }
    return 0;
}

int main()
{
    int n ;
    cout<<"Enter a number: ";
    cin>>n;

    oddeven(n);
    return 0;
}