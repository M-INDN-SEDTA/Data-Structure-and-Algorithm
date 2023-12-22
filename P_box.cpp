#include "bits/stdc++.h"
using namespace std;

int main()
{
    cout<<"Enter no. : ";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {   int j;
        for(j=1;j<=n-i;j++)
        {   cout<<" ";  }
        
        for(j=1;j<=i;j++)
        {   cout<<"*";  }
        
        if(i>1)
        {   for(j=1;j<i;j++)
            {   cout<<"*";  }
        }
        cout<<endl;
    }

    //Invertion
    for(int i=1;i<=n;i++)
    {   int j=1;
        for(;j<=i;j++)
        {   cout<<" ";  }
        
        for(;j<=n-i;j++)
        {   cout<<"*";  }
        
        if(i>1)
        {   for(;j>i;j--)
            {   cout<<"*";  }
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<=n;i++)
    {   
        for(int j=1;j<=n-i;j++)
        {   cout<<"  ";}

        for(int j=1;j<=(2*i-1);j++)
        {   cout<<"* ";}
    cout<<endl;
    }
    //Inversion
     for(int i=n;i>=1;i--)
    {   
        for(int j=1;j<=n-i;j++)
        {   cout<<"  ";}

        for(int j=1;j<=(2*i-1);j++)
        {   cout<<"* ";}
    cout<<endl;
    }

return 0;
}