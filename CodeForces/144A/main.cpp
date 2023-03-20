//
//  main.cpp
//  problem arrival of a general
//
//

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int count=0;
    int i, j;
    for(i=(n-1); i>=0; i--){
        if(a[i]==*min_element(a,a+n)){
            count+=(n-1-i);
            break;
        }
    }
    for(j=0; j<n; j++){
        if(a[j]==*max_element(a,a+n)){
            count+=j;
            break;
        }
    }
    if(i<j){
        count-=1;
    }
    cout<<count<<endl;
    return 0;
}

