//
//  main.cpp
//  problem petya and strings
//


#include <iostream>
#include<string>
using namespace std;
string string_case(string s){
    int n= s.length();
    for(int i=0; i<n; i++){
        if(isupper(s[i])){
            s[i] = tolower(s[i]);
        }
    }
    return s;
}
int main(){
    string s1, s2;
    cin>>s1>>s2;
    string s1l =string_case(s1);
    string s2l =string_case(s2);
    if(s1l<s2l){
        cout<<-1<<endl;
    }else if(s1l>s2l){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}
