//
//  main.cpp
//  problem translation
//


#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int a= s.length(), count=0;
    if(s.length()==t.length()){
        for(int i=0; i<a; i++){
            if(s[i]==t[a-1-i]){
                count++;
            }
        }
    }else{
        cout<<"NO"<<endl;
        return 0;
    }
    if(count==a){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
