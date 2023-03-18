//
//  main.cpp
//  problem word
//
//  Created by Dipika Chichani on 19/05/21.
//

#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int countlower =0, countupper=0;
    for(int i=0; i<s.length(); i++){
        if(islower(s[i])){
            countlower++;
        }else{
            countupper++;
        }
     }
    if(countupper <= countlower){
        for(int i=0; i<s.length(); i++){
            putchar(tolower(s[i]));
        }
    }else{
        for(int i=0; i<s.length(); i++){
            putchar(toupper(s[i]));
        }
    }
    cout<<endl;
    return 0;
}
