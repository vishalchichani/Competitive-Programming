//
//  main.cpp
//  problem business trip
//


#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int k;
    cin>>k;
    int a[12];
    for(int i=0; i<12; i++){
        cin>>a[i];
    }
    sort(a,a+12);
    if(k>0){
        int b=0;
        for(int i=11; k>0 && i>=0; i--){
            k-=a[i];
            b=12-i;
        }
        if(k>0){
            cout<<-1<<endl;
        }else{
            cout<<b<<endl;
        }
    }else{
        cout<<0<<endl;
    }
    return 0;
}
