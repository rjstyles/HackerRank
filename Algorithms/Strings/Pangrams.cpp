#include <cmath>
#include <cstdio>
#include <iostream>
#include<ctype.h>
#include<cstring>
using namespace std;

int main() 
{
    char str[1000];
    scanf("%[^\n]s",str);
    int alpha[26];
    for(int i=0;i<26;i++)
        alpha[i]=0;
    
    int l=strlen(str),tmp;
    
    for(int i=0;i<l;i++)
    {
        if(str[i]!=' ')
        {
            tmp=(int)tolower(str[i])-97;
            alpha[tmp]=1;   
        }
    }
    for(int i=0;i<26;i++)
    {
        if(alpha[i]==0){
            cout<<"not pangram";
            return 0;
        }
    }
    cout<<"pangram";
    return 0;
}
