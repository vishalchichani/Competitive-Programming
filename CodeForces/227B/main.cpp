//
//  main.cpp
//  problem effective approach
//


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    long long int count1=0, count2=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(b[i]==a[j]){
                count1+=(j+1);
                count2+=(n-j);
                break;
            }
        }
    }
    cout<<count1<<" "<<count2<<endl;
    
    return 0;
}
