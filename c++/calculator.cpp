#include<iostream>
using namespace std;

int main()
{
    float a, b;
    char op;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the operator: ";
    cin>>op;

    switch(op){
        case '+':
        cout<<"Result: "<<a+b<<endl;
        break;

        case '*':
        cout<<"Result: "<<a*b<<endl;
        break;

        case '-':
        cout<<"Result: "<<a-b<<endl;
        break;

        case '/':
        cout<<"Result: "<<a/b<<endl;
        break;

        default:
        cout<<"Enter another operator"<<endl;

    }
    

    return 0;
}