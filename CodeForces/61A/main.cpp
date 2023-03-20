//
//  main.cpp
//  problem ultra fast mathematician
//
//

#include <iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    string c;
    for(int i=0; i<a.length(); i++){
        if(a[i]!=b[i]){
            c.push_back('1');
        }else{
            c.push_back('0');
        }
    }
    cout<<c<<endl;
    return 0;
}
