#include<iostream>
using namespace std;

char isAlphabet(char ch){
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
        cout<<"Alphabet"<<endl;
    } else {
        cout<<"Not alphabet"<<endl;
    }
}

int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    isAlphabet(ch);
    return 0;
}