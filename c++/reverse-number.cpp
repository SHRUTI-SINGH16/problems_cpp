#include<iostream>
using namespace std;

int main()
{
    int n,rem,reverse;
    cout<<"Enter number to be reversed : ";
    cin>>n;
    reverse = 0;

    while(n>0){
        rem = n%10;
        reverse = reverse*10 + rem;
        n=n/10;
    }
    cout<<reverse<<endl;
    return 0;
}