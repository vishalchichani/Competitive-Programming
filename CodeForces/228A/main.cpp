//
//  main.cpp
//  problem horseshoe
//


#include <iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cin>>m>>n>>p>>q;
    int count =0;
    if(m==n || m==p ||m==q){
        count++;
    }
    if(n==p || n==q){
        count++;
    }
    if(p==q){
        count++;
    }
    cout<<count<<endl;
    return 0;
}
