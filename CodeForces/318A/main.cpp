//
//  main.cpp
//  prblem even odds
//
//  Created by Dipika Chichani on 04/10/21.
//

#include <iostream>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    long long int m;
    if(n%2==0){
        m=n/2;
    }else{
        m=(n+1)/2;
    }
    if(k>m){
        cout<<(k-m)*2<<endl;
    }else{
        cout<<2*k-1<<endl;
    }
    return 0;
}
