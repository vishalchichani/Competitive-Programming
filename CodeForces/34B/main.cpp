//
//  main.cpp
//  problem sale
//


#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int sum=0;
    sort(a,a+n);
    for(int i=0; i<n; i++){
        if(m>0){
            if(a[i]<0){
                sum+=abs(a[i]);
                m--;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
