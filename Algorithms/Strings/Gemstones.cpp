#include <vector>
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    string str[n];
    int i,length[n]; char alpha[26];
    
    for(i=0;i<n;i++)
        cin>>str[i];
    
    for(i=0;i<26;i++)
        alpha[i]=0;
    
    for(i=0;i<n;i++)
        length[i]=str[i].length();
    
    int tmp;
    
    for(i=0;i<length[0];i++)
    {
        tmp= str[0][i]-97;
        alpha[tmp]=1;
    }
    
    int c=0,flag;
    
    for(i=0;i<26;i++)
    {
        if(alpha[i]==1)
        {
            for(int j=1;j<n;j++)
            {
                flag=0;    
                for(int k=0;k<length[j];k++)
                {
                    if(str[j][k]==(i+97))
                    {
                        flag=1;break;
                    }
                }
                if(!flag)break;
            }
            if(flag)c++;
        }    
    }
    cout<<c;
    return 0;
}
