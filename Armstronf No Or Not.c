#include<stdio.h>
int main()
{
	int i,n,n1,sum=0,d;
	printf("\n Enter A Number :");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		d=n%10;
		sum=sum+d*d*d*d;
		n=n/10;
	}
	if(sum==n1)
	{
		printf("\n Armstrong Number ...");
	}
	else
	  	printf("\nNOT Armstrong Number ...");
}
