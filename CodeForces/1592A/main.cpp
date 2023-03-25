//
//  main.cpp
//  problem gamer hemose
//


#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        long long int H;
        cin>>n>>H;
        long long int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        int count =0;
        while(H>0){
            H-=a[n-1];
            count++;
            if(H>0){
                H-=a[n-2];
                count++;
            }
        }
        cout<<count<<endl;
        t--;
    }
    
    return 0;
}
