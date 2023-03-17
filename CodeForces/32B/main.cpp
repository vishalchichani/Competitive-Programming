//
//  main.cpp
//  problem borze
//
//  Created by Dipika Chichani on 14/05/21.
//

#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string b;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='-' && s[i+1]=='.'){
            b.push_back('1');
            i++;
        }else if(s[i]=='-' && s[i+1]=='-'){
            b.push_back('2');
            i++;
        }else{
            b.push_back('0');
        }
    }
    cout<<b<<endl;
    return 0;
}
