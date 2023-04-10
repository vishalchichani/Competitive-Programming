//
//  main.cpp
//  problem dubstep
//


#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0, count=0, n=s.length();
    while(i<n){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=3;
            count++;
        }
        else{
            if(count>0){
                cout<<" ";
                count=0;
            }
            cout<<s[i];
            i++;
        }
    }
    cout<<endl;
    return 0;
}
