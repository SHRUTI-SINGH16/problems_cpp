#include<iostream>
using namespace std;

int BinaryToOctal(int num){
    int decimal = 0;
    int base = 1;

    while(num>0){
        int rem = num%10;
        decimal = decimal + rem*base;
        base = base*2;
        num = num/10;
    }
    // cout<<decimal;
    int octal = 0;
    base = 1;
    while(decimal>0){
        int rem = decimal%8;
        octal = octal + rem*base;
        base = base*10;
        decimal = decimal/8;
    }
    cout<<octal;

    }

int main()
{
    
    int n;
    cin>>n;
    
    BinaryToOctal(n);
    return 0;

    
    return 0;
}