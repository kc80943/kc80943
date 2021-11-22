#include<stdio.h>
int main()
{
	int a[1000],n;
	printf(" so phan tu cua mang la( n<=1000):");
	scanf("%d",&n);

	nhapmang(a,n);
	printf(" max= %d ",max(a,n));

}
void nhapmang(int a[],int n)
{

	int i = 0;

	printf(" nhap phan tu cua mang:\n");
	for ( i; i<n;i++)
	{
	
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	}
}
int max(int  a[], int n)
{
	int i;
	printf(" phan tu lon nhat cua mang la");
	int	max= a[0];
	for ( i=1; i<n;i++)
	{
			if ( a[i]>a[i-1])
				{
					max = a[i];
				}
	}
	return max;
}
