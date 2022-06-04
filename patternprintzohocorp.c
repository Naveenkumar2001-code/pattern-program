#include<stdio.h>
#include<string.h>
void main()
{
/*	int str[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	printf("\n values are:\n");
	int i,j;
	for(i=0;i<3;i++)
	{ 
	
	for(j=0;j<3;j++)
	{
			printf("%d",str[i][j]);
			
	}
		printf("\n");
	}*/
	printf("\n ********* string using **************\n");
	
	char str[5][5]={"WELCOMETOZOHOCORPRATION"};
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c",str[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}
