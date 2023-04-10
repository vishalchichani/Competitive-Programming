//
//  main.cpp
//  problem system of equations
//


#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int count=0;
    for(int i=0; i<=m; i++){
        if(sqrt(float(m-i))- sqrt(m-i)==0){
            if(sqrt(float(n-(sqrt(m-i))))==i){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}



