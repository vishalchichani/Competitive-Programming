//
//  main.cpp
//  problem insomnia curve
//


#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int k, l, m, n, d, count =0;
    cin>>k>>l>>m>>n>>d;
    if(k==1){
        cout<<d<<endl;
    }else{
        for(int i= 1; i<(d+1); i++){
            if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
