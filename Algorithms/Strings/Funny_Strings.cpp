#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        int i,l=strlen(str),flag=1;
        for(i=1;i<l-1;i++)
        {
            if(abs(str[i]-str[i-1])!=abs(str[l-i-1]-str[l-i]))
            {
                cout<<"Not Funny\n";
                flag=0;
                break;
            }
        }
        if(flag)cout<<"Funny\n";
    }
    return 0;
}
