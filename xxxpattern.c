#include<stdio.h>
#include<string.h>
void  main()
{
int n,i,j;
char str[20];
printf("\n enter the string value:");
scanf("\n %s",str);
n=strlen(str);
/*if((n=strlen(str))%2==0)
{
	printf("\n not odd");
	exit(0);
}*/
for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			if(i==j||j==n-1-i)
			{
				printf("%c",str[i]);
			}
			else
			{
				printf(" ");
			}
		}
	}
}
