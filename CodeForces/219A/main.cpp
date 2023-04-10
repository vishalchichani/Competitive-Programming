//
//  main.cpp
//  problem k string
//


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int a = 0;
    cin>>a;
    string code {} ;
    cin>>code;
    int n = code.length();
    int c= n/a;
    int count = 0;
    string final{};
    sort(code.begin(), code.end());
    for(int i = 0; i<n-a+1 ; ++i)
    {
        if(i%a == 0)
        {
        for(int j=1; j<a ; ++j)
        {
            if(code[i+j] != code[i])
            {
                count++;
                break;
            }
        }
        if(count>=1)
        {
            break;
        }
        }
    }
    if(count>= 1 || n%a != 0)
    {
        cout<<-1;
    }
    else
    {
        for(int i = 0 ; i<c ; ++i)
        {
            final.push_back(code[a*i]);
        }
        for(int i = 0 ; i<a ; ++i)
        {
            cout<<final;
        }
    }
    
    return 0;
}
