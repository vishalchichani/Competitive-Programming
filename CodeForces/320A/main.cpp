//
//  main.cpp
//  problem magic numbers
//

#include<iostream>
#include<string>
using namespace std;
int main(){
string number;
cin>>number;
int l=number.length();
int i=0;
while (i<l){
    if (number[i]=='1'){
        if (number[i+1]=='4'){
            if (number[i+2]=='4'){
                i=i+3;
            }
            else {
                i=i+2;
            }
        }
        else {
            i++;
        }
    }
    else {
        cout<<"NO";
        return 0;
    }
}
cout<<"YES";
return 0;
}
