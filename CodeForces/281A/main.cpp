//
//  main.cpp
//  problem word capitalisation
//


#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(islower(s[0])){
        putchar(toupper(s[0]));
        for(int i=1; i<s.length(); i++){
            cout<<s[i];
        }
        cout<<endl;
    }else{
        cout<<s<<endl;
    }
    return 0;
}
