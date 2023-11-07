#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

int main() {
    string s;
    cin>>s;
    int count = 1;
    int max = 1;
    for(int i = 0; i < s.length()-1; i++){
        if(s[i] == s[i+1]){
            count++;
            if(count>max){
                max = count;
            }
        }else{
            count = 1;
        }
    }
    cout<<max<<endl;

}