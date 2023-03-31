//
//  main.cpp
//  problem jeff and digits
//


#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n], count5=0, count0=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==5){
            count5++;
        }else{
            count0++;
        }
    }
    if(count5/9>0 && count5%9!=0 && count0!=0){
        sort(arr,arr+n);
        int b= n-1-(count5%9);
        for(int i=b; i>=0; i--){
            cout<<arr[i];
        }
    }else if( count5>0 && count5%9==0 && count0!=0){
        sort(arr, arr+n);
        for(int i=n-1; i>=0; i--){
            cout<<arr[i];
        }
    }else if(count0==0){
        cout<<-1;
    }else{
        cout<<0;
    }
    cout<<endl;
    return 0;
}
