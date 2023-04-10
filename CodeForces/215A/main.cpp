//
//  main.cpp
//  problem bicycle chain
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
    float max =0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if((b[i]/a[j]>max) && (float(b[i])/a[j]- b[i]/a[j]==0)){
                max = b[i]/a[j];
            }
        }
    }
    int count=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(max==float(b[i])/a[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
