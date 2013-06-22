#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int i,n,r,sum=0,prime,j,flag=0;
	for(i=999;i>0;i-=2)
	{
		prime=i;
		if(prime%2==0)
		{
			continue;
		}
		flag=0;
		for(j=3;j<=sqrt(prime);j+=2)	
		{
			if(prime%j==0)
			{
				flag=1;
			break;
			}
			
		}	
		if(flag)
		{
			continue;
		}
		n=i;
		sum=0;
		while(n>0)
		{
			r=n%10;
			sum=sum*10+r;
			n=n/10;
		}
		if(i==sum)
		break;
		
	}
	printf("%d",sum);
	return 0;
}
