//
//  main.cpp
//  problem boy or girl
//


#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count =0;
    for(int i=0; i<s.length(); i++){
        for(int j=i+1; j<s.length(); j++){
            if(s[i]==s[j]){
                count++;
                break;
            }
        }
    }
    int n = s.length() - count;
    if(n%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
