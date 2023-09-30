#include<iostream>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0){
        int n,m;
        long long k;
        cin>>n>>m>>k;
        long long arr[n];
        long long brr[m];
        long long ans = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            ans+=arr[i];
        }
        for(int i=0; i<m; i++){
            cin>>brr[i];
        }
        sort(arr, arr+n);
        sort(brr, brr+m);
        
        if(k%2!=0){
            if(arr[0] < brr[m-1]){
                ans = ans - arr[0] + brr[m-1];
            }
        }else{
            if(arr[0] >= brr[m-1]){
                ans = ans - arr[n-1] + brr[0];
            }else{
                ans = ans - arr[0] + brr[m-1];
                ans = ans - max(arr[n-1],brr[m-1]) + min(arr[0], brr[0]);
            }

        }
        cout<<ans<<endl;
        t--;
    }

}