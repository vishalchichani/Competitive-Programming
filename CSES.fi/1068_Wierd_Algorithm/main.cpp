#include<iostream>
#include <algorithm>
#include <string>


using namespace std;

int main() {
    long long n;
    cin >> n;
    cout<<n<<endl;
    while(n!=1){
        if(n%2==0){
            n/=2;
        }else{
            n*=3;
            n++;
        }
        cout<<n<<endl;

    }    
    return 0;
}