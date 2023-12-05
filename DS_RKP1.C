/* A C Programme to Define the Example of Sorting in Ascending Order */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100], n, i, j, tmp, m;
	printf("\n Enter Total No. of Element ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter Last No. ");
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		m=i;
		for(j=i+1;j<n;j++)
		{
			if(a[m]>a[j])
			{
				m=j;
			}
		}
		if(m!=1)
		{
			tmp = a[i];
			a[i] = a[m];
			a[m] = tmp;
		}
	}
	printf("\n Elements Are \n\t\t");
	for(i=0;i<n;i++)
	printf("\t%d",a[i]);
	getch();
}