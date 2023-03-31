//
//  main.cpp
//  problem elephant rozdil
//


#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int count =0,b=0;
    long long int min = *min_element(a,a+n);
    for(int i=0; i<n; i++){
        if(min==a[i]){
            count++;
            if(count==1){
                b=i;
            }
        }
    }
    if(count==1){
        cout<<b+1<<endl;
    }else{
        cout<<"Still Rozdil"<<endl;
    }
    return 0;
}
