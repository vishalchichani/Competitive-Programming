//
//  main.cpp
//  124A
//

#include <iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    
    if(n-a-1 > b){
        cout<<b+1<<endl;
    }else{
        cout<<n-a<<endl;
    }
    return 0;
}
