//
//  main.cpp
//  problem amusing joke
//


#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    string s1, s2, s3, s4;
    cin>>s1>>s2>>s3;
    s4 = s1+s2;
    sort(s3.begin(), s3.end());
    sort(s4.begin(), s4.end());
   //cout<<s3<<endl;
   //cout<<s4<<endl;
    if(s3==s4){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
