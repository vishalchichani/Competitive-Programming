//
//  main.cpp
//  problem dima and friends
//


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        b+=a[i];
    }
    int count=0;
    for(int i=1; i<6; i++){
        if((b+i)%(n+1)==1){
            count++;
        }
    }
    cout<<5-count<<endl;
    return 0;
}
