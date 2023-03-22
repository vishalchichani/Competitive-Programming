//
//  main.cpp
//  problem tram
//


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    int count[n];
    count[0]=b[0];
    for(int i=1; i<n; i++){
        count[i]= count[i-1]+(b[i]-a[i]);
    }
    int m=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(count[i]>=count[j]){
                m++;
            }
        }
        if(m==n){
            cout<<count[i]<<endl;
            break;
        }
        m=0;
    }
    return 0;
}
