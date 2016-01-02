/*
    Solution to the problem specified at https://www.hackerrank.com/challenges/flipping-bits
    by : Rajeev Singh
*/

#include <cmath>
#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,n=0,tmp;
        cin>>x;
        tmp=x;
        int b[32],i;
        for(i=0;i<32;i++)
            b[i]=0;
        i=0;
        while(tmp>0)
        {
            b[i]=tmp%2;
            tmp/=2;
            i++;
        }
        for(i=0;i<32;i++)
            b[i]=!b[i];
        
        for(i=0;i<32;i++)
        {
            if(b[i])
            {
                n+=pow(2,i);
            }
        }
        cout<<n<<endl;
    }
    return 0;
}
