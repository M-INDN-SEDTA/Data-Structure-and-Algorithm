#include "bits/stdc++.h"
using namespace std;
int main()
{
   cout<<"Enter no: "<<endl;
   int n,count;
   count=1;
   cin>>n;

   
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<= i)
            {
              cout<<count<<" ";  
              count++;
            }
            else
              cout<<" ";
            }
            cout<<endl;
    }
    

} 
