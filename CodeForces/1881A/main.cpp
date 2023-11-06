#include<iostream>
#include <algorithm>
#include <string>


using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0){
        int n, m;
        cin>>n>>m;
        string x;
        string s;
        cin>>x>>s;
        bool flag = true;
        int count = 0;
        while(flag){
            if(x.find(s)!=string::npos){
                flag = false;
                cout<<count<<endl;
            }
            x = x+x;
            count++;
            if(x.size() > 100){
                cout<<-1<<endl;
                break;
            }

        }
        t--;
    }

}