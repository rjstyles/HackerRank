#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int t;
    long long int a,b,i,r,c;
    scanf("%d",&t);
    while(t--)
        {
        c=0;r=0;
        scanf("%lld %lld",&a,&b);
        for(i=1;r<=b;i++)
             {
            
            if(r>=a)
                c++;
            r= r+ (1+(i-1)*2);
            
        }
        printf("%lld\n",c);
    }
    return 0;
}
