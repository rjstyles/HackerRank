#include <iostream>
using namespace std;

int main() 
{
    long long m,n,r;
    cin>>m>>n>>r;
    long long grid[m][n];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        cin>>grid[i][j];    
        
        int loop=(m<n)?m/2:n/2;
        for(int j=0;j<loop;j++)
        {
            int rot = r%((2*(m+n -(4*j)))-4);
            for(int r=0;r<rot;r++)         
            {        int c1,c2,c3,c4,k;
                    c1=grid[j][j],c2=grid[j][n-j-1],c3=grid[m-1-j][j],c4=grid[m-1-j][n-1-j];
                    for(k=j;k<n-j-1;k++)
                    {
                            grid[j][k]=grid[j][k+1];
                            grid[m-j-1][n-k-1]=grid[m-j-1][n-k-2];
                    } 
                    for(k=j;k<m-j-1;k++)
                    {
                            grid[m-k-1][j]=grid[m-k-2][j];
                            grid[k][n-j-1]=grid[k+1][n-j-1];
                    }

                   grid[j+1][j]=c1;
                   grid[m-j-2][n-j-1]=c4;
            }
        } 
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<grid[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
