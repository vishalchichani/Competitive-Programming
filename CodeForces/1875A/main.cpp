#include<iostream>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0){
        long long a, b;
        int n;
        cin>>a>>b>>n;
        long long arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        //sort(arr,arr+n);
        int j=0;
        long long ans = 0;
        while(b!=0 && j<=n){
            if(b==1 && j<n){
                b = min(b+arr[j], a);
                j++;
            }
            ans+=(b-1);
            b=1;
            if(j==n){
                ans++;
                break;
            }

            
        }
        cout<<ans<<endl;
        t--;
    }

}