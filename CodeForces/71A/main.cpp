//
//  main.cpp
//  problem way too long words
//


#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s[t];
    for(int i=0; i<t; i++){
        cin>>s[i];
    }
    for(int i=0; i<t; i++){
        if(s[i].length()<=10){
            cout<<s[i]<<endl;
        }else{
            cout<<s[i][0]<<s[i].length()-2<<s[i][(s[i].length()-1)]<<endl;
        }
    }
    return 0;
}
