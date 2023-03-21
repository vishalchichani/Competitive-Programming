//
//  main.cpp
//  problem cupboards
//


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int door[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>door[i][j];
        }
    }
    int countl0=0, countr0=0, countl1=0, countr1=0;
    for(int i=0; i<n;i++){
        if(door[i][0]==0){
            countl0++;
        }else{
            countl1++;
        }
        
        if(door[i][1]==0){
            countr0++;
        }else{
            countr1++;
        }
    }
    int t=0;
    t= min(countl0,countl1);
    t+=min(countr0,countr1);
    cout<<t<<endl;
    return 0;
}
