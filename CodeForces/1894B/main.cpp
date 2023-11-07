#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        unordered_map<int,vector<int> > mp;
        int count=0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            mp[a[i]].push_back(i);
            if(mp[a[i]].size() == 2){
                count++;
            }
        }
        int b[n];
        if(count<2){
            cout<<-1<<endl;
            continue;
        }else{
            
            bool flag = true;
            for(auto it: mp){
                if(it.second.size() == 1){
                    b[it.second[0]] = 1;
                }else if(flag == true){
                    for(int i = 0; i < it.second.size(); i++){
                        if(i==0){
                            b[it.second[i]] = 1;
                        }else{
                            b[it.second[i]] = 2;
                        }
                    }
                    flag = false;
                }else{
                    for(int i = 0; i < it.second.size(); i++){
                        if(i==0){
                            b[it.second[i]] = 1;
                        }else{
                            b[it.second[i]] = 3;
                        }
                    }
                    
                }

                
            }
        }
        for(int i = 0; i < n; i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;





       


    }
    return 0;

}