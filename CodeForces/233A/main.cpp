//
//  main.cpp
//  problem perfect permutation
//


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2!=0){
        cout<<-1<<endl;
    }else{
        for(int i=1; i<=(n/2);i++){
            cout<<(2*i)<<" "<<(2*i-1)<<" ";
        }
    }
    cout<<endl;
    return 0;
}
