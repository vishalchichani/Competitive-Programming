//
//  main.cpp
//  problem helpful maths
//


#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char temp;
    for(int i=0; i<s.length(); i+=2){
        for(int j=i+2; j<s.length(); j+=2){
            if(s[i]>s[j]){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
