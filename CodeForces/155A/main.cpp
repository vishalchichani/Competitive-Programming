//
//  main.cpp
//  problem i love username
//


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count=0, great=0, less=0;
    if(arr[1]!=arr[0] && n!=1){
        count++;
    }
    for(int i=2; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[i]>arr[j]){
                great++;
            }else if(arr[i]< arr[j]){
                less++;
            }
        }
        if(great==i){
            count++;
        }
        if(less==i){
            count++;
        }
    great=0;
    less=0;
    }
    cout<<count<<endl;
    return 0;
}
