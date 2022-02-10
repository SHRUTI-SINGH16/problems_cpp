#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a, b, c; //sides of the triangle
    cin>>a>>b>>c;
    if (a==b && b==c){
        cout<<"equilateral triangle"<<endl;
    } else {
        if (a==b || b==c || c==a){
            cout<<"isosceles triangle"<<endl;
        } else {
            cout<<"scalene triangle"<<endl;
        }
    }



    return 0;
}