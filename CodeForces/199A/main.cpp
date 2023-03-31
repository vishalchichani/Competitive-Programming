//
//  main.cpp
//  problem hexadecimal theorem
//


#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int a[50];
    a[0]=0;
    a[1]=1;
    int b=0;
    for(int i=2; a[i-1]<n; i++){
        a[i]=a[i-2] + a[i-1];
        b=i;
    }
    if(n==0){
        cout<<0<<" "<<0<<" "<<0<<endl;
    }else if(n==1){
        cout<<0<<" "<<0<<" "<<1<<endl;
    }else if(n==2){
        cout<<0<<" "<<1<<" "<<1<<endl;
    }else if(n==3){
        cout<<1<<" "<<1<<" "<<1<<endl;
    }else{
        for(int i=3; i<=b; i++){
            if(a[i]==n){
                cout<<a[i-4]<<" "<<a[i-3]<<" "<<a[i-1]<<endl;
            }
        }
    }
    return 0;
}
