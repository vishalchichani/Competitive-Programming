#include<iostream>
#include <algorithm>
#include <string>


using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n-1);
    for(int i=0;i<n-1;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<n<<endl;
}