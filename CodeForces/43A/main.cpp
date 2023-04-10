//
//  main.cpp
//  problem football game
//


#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    string s,t;
    for(int i=0; i<n; i++){
        cin>>a[i];
        s=a[0];
        if(s!=a[i]){
            t=a[i];
        }
    }
    int counts=0, countt=0;
    for(int i=0; i<n; i++){
        if(a[i]==s){
            counts++;
        }else{
            countt++;
        }
    }
    if(counts>countt){
        cout<<s<<endl;
    }else{
        cout<<t<<endl;
    }
    
    return 0;
}
