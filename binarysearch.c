#include <stdio.h>
int main()
{
	int a[10],n,i,j,temp,first,last,mid,key;
	
	printf("enter the size of the array : ");
	scanf("%d",&n);
	
	printf("enter the element of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The elements before sorting is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for (i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("\nThe elements after sorting is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\n enter key elements to be searched : ");
	scanf("%d",&key);
	
	first=0;
	last=n-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(key==a[mid])
		{
			printf("The elements %d is found at position %d\n",key,mid+1);
			return(0);
		}
		else if  (key<a[mid])
		{ 
			last=mid-1;
		}
		else
		{
			first=mid+1;
		}
	}
	printf("The elements %d not found in array\n",key);
	return(1);
}








