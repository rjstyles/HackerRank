/*
    Solution to the problem specified at https://www.hackerrank.com/challenges/sherlock-and-valid-string
    by : Rajeev Singh
*/

#include <vector>
#include <iostream>

using namespace std;

int alpha[26];

int main() 
{
    string s;
    cin>>s;
    int l=s.length(),i,c=0,flag=0,n;
    for(i=0;i<l;i++)
        alpha[s[i]-97]++;
    
    n=alpha[s[0]-97];
    
    for(i=0;i<26;i++)
    {
        if(alpha[i]!=n && alpha[i]!=0)
            c++;
        if(c>1)
        {
            flag++;break;
        }
    }
    
    if(flag)cout<<"NO";
    else    cout<<"YES"; 
    
    return 0;
}
