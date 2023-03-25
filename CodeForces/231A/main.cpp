//
//  main.cpp
//  problem teams
//


#include <iostream>
using namespace std;
int main(){
    int n,solve=0;
    cin>>n;
    while(n-->0){
        int count=0;
        int arr[3] ={};
        for(int i=0; i<3; i++){
            cin>>arr[i];
            count+=arr[i];
            arr[i]=0;
        }
        if(count>1){
            solve++;
        }
    }
    cout<<solve<<endl;
    return 0;
}
