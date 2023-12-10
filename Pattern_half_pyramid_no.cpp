#include "bits/stdc++.h"
using namespace std;

int main(){
  cout<<"Enter no. :"<<endl;
  int n;
  cin>>n;

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
        if (j<=i)
        {
            cout<<i;
        }
        else
        cout<<" ";
    }
   cout<<endl;
  }
}
