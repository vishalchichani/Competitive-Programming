//
//  main.cpp
//  problem panaromix prediction
//


#include <iostream>
using namespace std;
bool is_prime(int a){
    int x =0;
    for(int i=2; i<=a/2; i++){
        if(a%i==0){
            x++;
        }
    }
    if(x==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n, m, next;
    cin>>n>>m;
    next = n+1;
    while(is_prime(next)== false){
        next++;
    }
    if(next==m){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
