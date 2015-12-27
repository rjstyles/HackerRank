//https://www.hackerrank.com/challenges/make-it-anagram
//By Rajeev Singh

#include <vector>
#include <iostream>
using namespace std;

int main() 
{
    string s1,s2;
    int l1,l2,i,j,c=0,flag;
    cin>>s1>>s2;
    l1=s1.length(); l2=s2.length();
    
    int alpha1[26],alpha2[26];
    
    for(i=0;i<26;i++)
    alpha2[i]=alpha1[i]=0;
    
    for(i=0;i<l1;i++)
        alpha1[s1[i]-97]++;
    
    for(i=0;i<l2;i++)
        alpha2[s2[i]-97]++;
    
    for(i=0;i<26;i++)
    {
        c+=abs(alpha1[i]-alpha2[i]);
    }
    
    cout<<c;
    return 0;
}
