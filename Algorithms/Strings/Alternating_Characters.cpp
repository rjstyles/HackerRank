#include <iostream>
#include<cstring>

using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[100000];
        cin>>str;
        int i,c=0,l=strlen(str);
        char s=str[0];
        for(i=1;i<l;i++)
        {
             if(str[i]==s)
                 c++;
             else s=str[i];
        }
        cout<<c<<endl;
    }
    return 0;
}
