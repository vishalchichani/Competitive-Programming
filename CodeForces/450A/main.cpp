//
//  main.cpp
//  problem jzzhu and children
//


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N = 0 ;
    double m = 0;
    cin>>N>>m;
    double T[N];
    for(int i = 0; i<N ; ++i)
    {
        cin>>T[i];
    }
    double final[N];
    for(int i = 0; i<N ; ++i)
    {
        final[i] = ceil(T[i]/m);
    }
    double max = final[0];
    for(int i = 0; i<N ; ++i)
    {
        if(final[i]>max)
         {
             max = final[i];
         }
     }
     int count = 0;
     for(int i = 0; i<N ; ++i)
     {
        if(final[i] == max)
         {
             count = i+1;
         }
      }
     cout<<count;
     return 0;
}
