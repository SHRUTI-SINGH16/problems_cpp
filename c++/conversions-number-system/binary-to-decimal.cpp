#include<iostream>
#include<math.h>
#include<string>
using namespace std;


int BinarytoDecimal(int num){
    int base = 1;
    int binary = 0;

    while(num>0){
        int rem = num%10;
        binary = binary + rem*base;
        base = base *2;
        num=num/10;

    }
    cout<<binary<<endl;

}

int main()
{
    int n;
    cin>>n;
    
    BinarytoDecimal(n);
    return 0;
}