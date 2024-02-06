#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

int main() {
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int ans=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            ans+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<ans<<endl;    
}