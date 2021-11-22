#include<stdio.h>
//ex1 

int main()
{
	int n;
	do
		{
			printf(" nhap n:");
			scanf("%d",&n);
		} while ( n<0);
	
	printf (" sum = %d",sum(n));
}
int sum(int n)
{

	int sum = 0;
	int i =1;
	
		for ( i; i<= n; i++)
			{
				if ( i%2 == 0)
				{
					sum = sum + i;
				}
			}
	
	return sum;
	
}		
