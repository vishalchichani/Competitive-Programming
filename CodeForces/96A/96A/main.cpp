//
//  main.cpp
//  96A
//


#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count0=0, count1=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            count0++;
            count1=0;
        }else{
            count1++;
            count0=0;
        }
        if(count0>=7 || count1>=7 ){
            cout<<"YES"<<endl;
            break;
        }
    }
    if(count0 <7 && count1 < 7){
        cout<<"NO"<<endl;
    }
    return 0;
}
