//
//  main.cpp
//  problem beautiful year
//


#include <iostream>
using namespace std;
bool checkyear(int x){
    int a = x/1000;
    int b = x%1000;
    int c = b/100;
    int d = b%100;
    int e = d/10;
    int f = d%10;
    bool w = false;
    if(a!=c && a!=e && a!=f && c!=e && c!=f && e!=f){
        w = true;
    }
    return w;
}
int main(){
    int year;
    cin>>year;
    do{
        year++;
        checkyear(year);
    }while(checkyear(year)== false);
    cout<<year<<endl;
    return 0;
}
