#include<iostream>
using namespace std;

//       Case #1:
//       ..+-+-+-+
//       ..|.|.|.|
//       +-+-+-+-+
//       |.|.|.|.|       3 4
//       +-+-+-+-+
//       |.|.|.|.|
//       +-+-+-+-+
//       Case #2:
//       ..+-+
//       ..|.|
//       +-+-+        2 2
//       |.|.|
//       +-+-+




int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        int r,c;
        cin>>r>>c;
        cout<<"Case #"<<i+1<<":"<<endl;
        for(int i=0;i<2;++i){
            cout<<".";
        }
        for(int j=0;j<(c-1);j++){
            cout<<"+";
            cout<<"-";
        }
        cout<<"+"<<endl;

        for(int i=0;i<2;++i){
            cout<<".";
        }
        for(int j=0;j<(c-1);j++){
            cout<<"|";
            cout<<".";
        }
        cout<<"|"<<endl;

        

        for(int j=0;j<(r-1);++j){
            for(int i=0;i<(c);++i){
                cout<<"+";
                cout<<"-";
            }
            cout<<"+"<<endl;
            for(int j=0;j<(c);j++){
                cout<<"|";
                cout<<".";
            }
            cout<<"|"<<endl;
        }
        for(int i=0;i<(c);++i){
                cout<<"+";
                cout<<"-";
        }
        cout<<"+"<<endl;

    }
    return 0;
}