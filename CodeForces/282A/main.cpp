//
//  main.cpp
//  problem bit++
//


#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n-->0){
        string s;
        cin>>s;
        if(s[1]=='+'){
            count++;
        }else{
            count--;
        }
    }
    cout<<count<<endl;
    return 0;
}
