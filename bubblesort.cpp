#include <stdio.h>
#include <conio.h>
int main()
{
	int a[50],n,i,j,temp;
	printf ("enter the value of n:");
	scanf ("%d",&n);
	printf ("\n enter %d element of the list:",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if (a[j]>a[j+1])
			{
			 temp=a[j];
			 a[j]=a[j+1];
			 a[j+1]=temp;	
			}
		}
	}
	printf ("\n list after sorting\n");
	for (i=0;i<n;i++)
	printf ("\n %d \t",&a[i]);
	return 0;
}
