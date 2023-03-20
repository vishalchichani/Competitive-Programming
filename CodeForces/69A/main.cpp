

#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
    vector<int> vec = {0,0,0};
    for( int i=1; i<=n; i++){
        cin>>a>>b>>c;
        vec[0]+=a;
        vec[1]+=b;
        vec[2]+=c;
    }
    if (vec[0]==0 && vec[1]==0 && vec[2]==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
