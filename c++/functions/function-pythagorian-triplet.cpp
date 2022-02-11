#include<iostream>
using namespace std;

bool Pythagorian_triplet(int num1, int num2, int num3){
    int a,b,c;
    a = max(num1, max(num2,num3));

    if(a==num1){
        b=num2;
        c=num3;
    } else if (a==num2){
        b=num1;
        c=num3;
    } else {
        b=num1;
        c=num2;
    }

    if(a*a == b*b + c*c){
        return true;
    } else {
        return false;
    }
    
}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(Pythagorian_triplet(x,y,z)){
        cout<<"Yes";
    
    } else {
        cout<<"No";
    }
    return 0;
}