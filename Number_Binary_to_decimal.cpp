#include <bits/stdc++.h>
using namespace std;

int BtoD(int num)
{   int pow = 1;
    int ans = 0;
    
    while(num > 0)
    {   int ld = num % 10;
        ans += ld*pow;
        pow *= 2;
        num /= 10;

    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter binary no. to change in decimal: "<<endl;
    cin>>n;

    cout<<BtoD(n)<<endl;

}
