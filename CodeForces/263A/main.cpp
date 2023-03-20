//
//  main.cpp
//  Problem beautiful Matrix
//


#include <iostream>
using namespace std;
int main(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    int x=0 , y =0 ;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(a[i][j]==1){
                x=i-2;
                y=j-2;
            }
        }
    }
    cout<<abs(x)+abs(y)<<endl;
    return 0;
}
