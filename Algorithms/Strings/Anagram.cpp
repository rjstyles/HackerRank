//https://www.hackerrank.com/challenges/anagram
//By: Rajeev Singh

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
        int l=s.length();
        
        if(l%2==0)
        {
            int alpha1[26],alpha2[26],i,j,c=0;
            
            for(i=0;i<26;i++)
            {
                alpha1[i]=0;
                alpha2[i]=0;
            }
            
            for(i=0;i<l/2;i++)
            {
                alpha1[s[i]-97]++;
                alpha2[s[i+l/2]-97]++;
            }
            
            for(i=0;i<26;i++)
            {
                if(alpha1[i]>alpha2[i])
                    c+=alpha1[i]-alpha2[i];
            }
            
            cout<<c<<endl;
        }
        else 
            cout<<"-1"<<endl;
    }
    return 0;
}
