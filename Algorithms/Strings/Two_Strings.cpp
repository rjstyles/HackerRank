/*
    Solution to problem at  https://www.hackerrank.com/challenges/two-strings
    By : Rajeev Singh
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
        string s1,s2;
        cin>>s1>>s2;
        
        int alpha1[26],alpha2[26],i,l1=s1.length(),l2=s2.length();
        int flag=0;
        
        for(i=0;i<26;i++)
        {
            alpha1[i]=0;
            alpha2[i]=0;
        }
        
        for(i=0;i<l1;i++)
            alpha1[s1[i]-97]=1;
        
        for(i=0;i<l2;i++)
            alpha2[s2[i]-97]=1;
        
        for(i=0;i<26;i++)
        {
            if(alpha1[i]==1 && alpha2[i]==1)
            {
                cout<<"YES\n";
                flag++;
                break;
            }
        }
        if(!flag)cout<<"NO\n";
    }
    return 0;
}
