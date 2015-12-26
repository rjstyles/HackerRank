#include <cstring>
#include<cmath>
#include <iostream>

using namespace std;

int main()
{
    char s[81];
    cin >> s;
    int l=strlen(s);
    int r,c;
    r=(int)floor(sqrt(l));
    c=(int)ceil(sqrt(l));
    while((r*c)<l && r<l)
        r++;
    char grid[r][c];
    
    for(int i=0,k=0;i<r;i++)
        for(int j=0;j<c;j++,k++)
             if(k<l)grid[i][j]=s[k];
             else grid[i][j]=0;
        
    for(int j=0;j<c;j++)
    {
        for(int i=0;i<r;i++)
        {
            if(grid[i][j]==0)
                break;
            cout<<grid[i][j];
        }
        cout<<" ";
    }
    return 0;
}
