#include<iostream>
using namespace std;


int add(int num1, int num2){
        int sum = num1 + num2;
        return sum;
    }

int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"The sum is "<<add(a,b)<<endl;
    return 0;
}