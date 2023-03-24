//
//  main.cpp
//  problem soft drinking
//


#include <iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np,min1,toast;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    min1 = min(((k*l)/nl), (c*d));
    toast = min(min1, (p/np));
    cout<<toast/n<<endl;
    return 0;
}
