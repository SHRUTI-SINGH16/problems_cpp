#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i){

        int c[3],m[3],y[3],k[3];
        for(int i=0;i<3;++i){
            cin>>c[i]>>m[i]>>y[i]>>k[i];
        }
        

        cout<<*min_element(c, c + 3)<<endl;
        cout<<*min_element(m, m + 3)<<endl;
        cout<<*min_element(y, y + 3)<<endl;
        cout<<*min_element(k, k + 3)<<endl;






    }
    return 0;
}