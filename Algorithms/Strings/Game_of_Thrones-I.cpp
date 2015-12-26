#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
   
    string s;
    cin>>s;
    
    int l=s.length(),tmp;
    long alpha[26],i;
    int flag = 1;
    
    for(i=0;i<26;i++)
        alpha[i]=0;
    
    for(i=0;i<l;i++)
    {
        tmp=s[i]-97;
        alpha[tmp]++;
    }
    
    int odd=0;
    
    for(i=0;i<26;i++)
    {
        if(odd<2)
        {    
            if(alpha[i]>0)
            {
                if(alpha[i]%2==1)
                odd++;
            }
       }
       else
       {
           flag=0;
           break;
       }
    } 
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
