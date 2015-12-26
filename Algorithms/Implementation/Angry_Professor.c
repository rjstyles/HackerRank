#include<stdio.h>
int main()
{
	int t,n,k,arr[1000],i,c;
	scanf("%d",&t);
	while(t>0)
	{
		c=0;
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			if(arr[i]<=0) c++;
		}
		if(c>=k)printf("NO\n"); 
			else
				printf("YES\n");
		t--;
	}
	return 0;
}
