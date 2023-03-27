//
//  main.cpp
//  problem supercentral point
//


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0; i<n; i++){
        cin>>a[i][0]>>a[i][1];
    }
    int counttotal=0;
    for(int i=0; i<n; i++){
        int countlower=0, countupper=0, countleft=0, countright=0;
        for(int j=0; j<n; j++){
            if(a[i][0]==a[j][0]){
                if(a[i][1]>a[j][1]){
                    countupper++;
                }else if(a[i][1]<a[j][1]){
                    countlower++;
                }
            }
            if(a[i][1]==a[j][1]){
                if(a[i][0]>a[j][0]){
                    countright++;
                }else if(a[i][0]<a[j][0]){
                    countleft++;
                }
            }
        }
        if(countleft>0 && countupper>0 && countright>0 && countlower>0){
            counttotal++;
        }
    }
    cout<<counttotal<<endl;
    return 0;
}
