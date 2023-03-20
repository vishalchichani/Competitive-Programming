//
//  main.cpp
//  problem drinks
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
    double count=0;
    for(int i=0; i<n; i++){
        count+=a[i];
    }
    double b;
    b = count/double(n);
    cout<<b<<endl;
    return 0;
}
