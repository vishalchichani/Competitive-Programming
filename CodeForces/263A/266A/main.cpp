//
//  main.cpp
//  problem stones on the table
//
//  Created by Dipika Chichani on 20/05/21.
//

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count =0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
