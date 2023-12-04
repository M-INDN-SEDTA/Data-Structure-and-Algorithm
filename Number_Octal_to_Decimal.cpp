#include <bits/stdc++.h>
using namespace std;

int OtoD(int num)
{   int pow = 1;
    int ans = 0;
    
    while(num > 0)
    {   int ld = num % 10;
        ans += ld*pow;
        pow *= 8;
        num /= 10;

    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter octal no. to change in decimal: "<<endl;
    cin>>n;

    cout<<OtoD(n)<<endl;

}
