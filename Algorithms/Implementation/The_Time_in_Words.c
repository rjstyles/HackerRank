#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int h, m;
    scanf("%d",&h);
    scanf("%d",&m);
    char min[21][10]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
    char min2[5][10]={"ten","twenty"};
    if(m>0 && m<30)
        {
             if(m<=20)
                {
                if(m==15)
                    printf("quarter past %s",min[h]);
                 else
                 printf("%s minutes past %s\n",min[m],min[h]);
            }
        else
            {
            printf("twenty %s minutes past %s",min[m%10],min[h]);
        }
    }
    else if(m==0)
        printf("%s o' clock",min[h]);
    else 
        
    {
        if(m==45)
            printf("quarter to %s",min[h+1]);
        else
           {
        m=60-m;
        if(m==30)
        printf("half past %s",min[h]);
        else if(m==45)
        {
        printf("quarter to %s",min[h+1]);
    }
    else if(m<=20)
        printf("%s minutes to %s",min[m],min[h+1]);
    else if(m==0)
        printf("%s o' clock",min[h]);
        else
        {
        printf("%s %s minutes to %s",min2[(m/10)-1],min[m%10],min[h+1]);
    }
    }
    }
    
    return 0;
}
