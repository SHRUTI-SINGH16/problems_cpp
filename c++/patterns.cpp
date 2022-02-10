#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"1. Rectangle Pattern"<<endl;
    cout<<"Enter your choice : ";
    cin>>n;




    rectangle_pattern:
    int row,col,i,j;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            cout<<'*'<<endl;
        }
    }

    cases:
    switch(n){
        case 1:
        goto rectangle_pattern;
        break; 

    }
    return 0;
}