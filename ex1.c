#include<stdio.h>
int main()
{
	int n;
	printf(" nhap n:");
	scanf(" %d",&n);
	printf(" ham 1 =%d",ham1(n));
	printf(" ham 2 =%d",ham2(n));
	printf(" ham 3 =%d",ham3(n));
	printf(" ham 4 =%d",ham4(n));
	printf(" ham 5 =%d",ham5(n));
	

}
int ham1( int n)
{
	int i=1;
	int sum =0;
	for ( i; i<= n; i++)
		{
			sum = sum + i/2;
		}
	return sum;
}
int ham2( int n)
{
	int i=1;
	int sum =0;
	for ( i; i<= n; i++)
		{
			sum = sum + ( 2*i+1);
		}
	return sum;
}
int giaithua( int n)
{
	int i =1;
	int giaithua=1;
	for ( i; i<=n; i++)
		{
			giaithua = giaithua*i;
		}
	return giaithua;
}
int ham3( int n)
{

	int i=1;
	int sum =0;
	for ( i; i<=n; i++)
		{
			sum = giaithua(i)+1 +sum;
		}
	return sum;
}
int ham4 ( int n)
{
	int i=1;
	int mul =1;
	for ( i; i<=n; i++)
		{
			mul = mul*giaithua(i);
		}
	return mul;
}
int ham5 ( int n)
{
	int i=1;
	int mul =1;
	for ( i; i<=n; i++)
		{
			mul = mul*( 2/3 *i);
		}
	return mul;
}




