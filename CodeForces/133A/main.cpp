//
//  main.cpp
//  problem HQ9+
//


#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n= s.length();
    int count =0;
    for(int i=0; i<n; i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cout<<"YES"<<endl;
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"NO"<<endl;
    }
    return 0;
}
