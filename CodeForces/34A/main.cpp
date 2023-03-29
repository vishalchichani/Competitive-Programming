//
//  main.cpp
//  problem reconnasaicnce 2
//
//  Created by Dipika Chichani on 04/10/21.
//

#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int b[n-1];
    for(int i=0; i<n-1; i++){
        b[i]=abs(a[i]-a[i+1]);
    }
    int x = *min_element(b,b+n-1);
    if(abs(a[n-1]-a[0])<x){
        cout<<1<<" "<<n<<endl;
    }else{
        for(int i=0; i<n; i++){
            if(b[i]==x){
                cout<<i+1<<" "<<i+2<<endl;
                break;
            }
        }
    }
    return 0;
}
