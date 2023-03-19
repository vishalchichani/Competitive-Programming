//
//  main.cpp
//  problem queue in school
//
//  Created by Dipika Chichani on 14/05/21.
//

#include <iostream>
using namespace std;
int main(){
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    for(int i=0; i<t; i++){
        int j=0;
        while(j<n){
            if(s[j]=='B' && s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j+=2;
            }else{
                j++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
