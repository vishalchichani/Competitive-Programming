//
//  main.cpp
//  problem xenia and ringroad
//


#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    long long int count = a[0]-1;
    for(int i=1; i<m; i++){
        if(a[i]>=a[i-1]){
            count+=(a[i]-a[i-1]);
        }else{
            count+=((n+1-a[i-1])+(a[i]-1));
        }
    }
    cout<<count<<endl;
    return 0;
}
