#include<stdio.h>
int main()
{
	int n=5;
	int i,j,k;
	int x=1,y,t;
	for(i=n;i>=1;i--)
	{
		y=i;
		t=x;
		for(k=1;k<i;k++)
		{
			printf("     ");		
		}
		for(j=n;j>=i;j--)
		{
			printf("  %d  ",t);
			t=t-y;
			y++;
		}
		x=x+i;
		printf("\n");
	}
	return 0;
}
