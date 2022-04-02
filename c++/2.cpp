#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;++j){

        int c[3],m[3],y[3],k[3];
        for(int i=0;i<3;++i){
            cin>>c[i]>>m[i]>>y[i]>>k[i];
        }
        

        int minc = *min_element(c, c + 3);
        int minm = *min_element(m, m + 3);
        int miny = *min_element(y, y + 3);
        int mink = *min_element(k, k + 3);

        cout<<"Case #"<<j+1<<": ";
        if(minc+minm+miny+mink<1000000){
            cout<<"IMPOSSIBLE"<<endl;
        }else if(minc+minm+miny+mink==1000000){
            cout<<minc<<" "<<minm<<" "<<miny<<" "<<mink<<endl;
        }else{
            
        }





    }
    return 0;
}