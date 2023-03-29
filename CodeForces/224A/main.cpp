//
//  main.cpp
//  problem parallelopiped
//
//  Created by Dipika Chichani on 04/10/21.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float x,y,z,m,l,b,h;
    int sum;
    cin>>x>>y>>z;
    m=y/z;
    l=sqrt(x/m);
    b=sqrt(x*m);
    h=z/l;
    sum= 4*(l+b+h);
    cout<<sum<<endl;
    return 0;
}
