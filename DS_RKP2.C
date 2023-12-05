/* A C Programme to Define the Example of Bubble Sorting */
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100], n, i, j, t;
	printf("\n Enter Total No. of Element ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter Element ");
		scanf("%d", &arr[i]);
	}
	printf("\n Unsorted Elements Are \n");
	for(i=0;i<n;i++)
	{
		printf("\t%d", arr[i]);
	}
	for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(arr[j]>arr[j+1])
			{
			t=arr[j];
			arr[j]=t;
			}
			}
		}
		printf("\n After Sorting \n");
		for(i=0;i<n;i++)
		printf("\t%d", arr[i]);
		getch();
		}