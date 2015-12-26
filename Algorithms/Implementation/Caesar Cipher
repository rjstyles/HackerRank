
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    for(int i=0;i<n;i++)
        {
            if((s[i]<='z' && s[i]>='a') || (s[i]>='A' && s[i]<='Z'))
            {
                for( int j=0;j<k;j++)
                    {
                        s[i]+=1;
                    if(s[i]==('Z'+1) || s[i]==('z'+1))
                            s[i]-=26;
                }
                cout<<s[i];
            }
            else
                cout<<s[i];
    }
    return 0;
}
