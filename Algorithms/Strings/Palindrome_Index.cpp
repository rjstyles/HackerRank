/*
    Solution to the problem specified at https://www.hackerrank.com/challenges/palindrome-index
    by : Rajeev Singh
*/

#include <vector>
#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=0,r=s.length()-1,c=-1;
        while(l<=r)
        {
            if(s[l]!=s[r])
                if(s[l+1]==s[r] && s[l+2]==s[r-1])
                {
                        c=l;
                        break;
                }
                else
                {   
                    c=r;
                    break;
                }
                l++;r--;
        }
        cout<<c<<endl;
    }
    return 0;
}
