/*
    Solution to the problem specified at https://www.hackerrank.com/challenges/sherlock-and-anagrams
    by : Rajeev Singh
*/

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int alpha1[26],alpha2[26],i,j,m,l=s.length(),c=0;

		for (i=1;i<l;++i)
		{											
			for (j=0;j<l;j++)
			{
        string tmp1=s.substr(j,i);
        if(tmp1.length()==i)
        {
          for (m = 0; m < 26; m++)
          {
            alpha1[m]=0;
          }
          for(m=0;m<i;m++)
              alpha1[tmp1[m]-97]++;
          
          for (int k=j+1;k<l;k++)
          {
            string tmp2=s.substr(k,i);
            if(tmp2.length()==i)
            {
              int x,flag=0;
              for (m = 0; m < 26; m++)
              {
                  alpha2[m]=0;
              }
              for(m=0;m<i;m++)
                  alpha2[tmp2[m]-97]++;
              
              for (m = 0; m < 26; m++)
              {
                if(alpha1[m]!=alpha2[m])
                {
                    flag++;
                    break;
                }
              }
              if(!flag)
              c++;
            }
          }
        }        
			}	
		}
    cout<<c<<endl;
	}
	return 0;
}
