#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int hour,min,sec;
    char time[2];
    scanf("%2d:%2d:%2d%s",&hour,&min,&sec,time);
    if(time[0] == 'P')
        {
        if(hour!=12)
        hour +=12;
        if(hour<10 && min<10 && sec<10)
        printf("0%d:0%d:0%d",hour,min,sec);
        else if(hour<10 && min<10)
        printf("0%d:0%d:%d",hour,min,sec);
        else if(hour<10 && sec<10)
        printf("0%d:%d:0%d",hour,min,sec);
        else if(min<10 && sec<10)
        printf("%d:%d:0%d",hour,min,sec);
        else if(hour<10)
        printf("0%d:%d:%d",hour,min,sec);
        else if(sec<10)
        printf("%d:%d:0%d",hour,min,sec);
        else if(min<10)
        printf("%d:0%d:%d",hour,min,sec);
        else printf("%d:%d:%d",hour,min,sec);
    }
    else{
        if(hour==12)
            hour=0;
        if(hour<10 && min<10 && sec<10)
        printf("0%d:0%d:0%d",hour,min,sec);
        else if(hour<10 && min<10)
        printf("0%d:0%d:%d",hour,min,sec);
        else if(hour<10 && sec<10)
        printf("0%d:%d:0%d",hour,min,sec);
        else if(min<10 && sec<10)
        printf("%d:%d:0%d",hour,min,sec);
        else if(hour<10)
        printf("0%d:%d:%d",hour,min,sec);
        else if(sec<10)
        printf("%d:%d:0%d",hour,min,sec);
        else if(min<10)
        printf("%d:0%d:%d",hour,min,sec);
        else printf("%d:%d:%d",hour,min,sec);   
    }
    
    return 0;
}
