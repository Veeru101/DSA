#include<stdio.h>
void selectionsort(int a[], int size);
int main()
{
	int arr[20],len,i,j;
	printf("enetr the array length.\n");
	scanf("%d",&len);
	printf("enter the array elements.\n");
	for(i=0;i<len;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<len;i++)
	{
	printf("%d ",arr[i]);
	}
	printf("\n");
	selectionsort(arr,len);
	for(i=0;i<len;i++)
	printf("%d ",arr[i]);
}
void selectionsort(int a[], int size)
{
	int i,j,lowval,temp;
	for(i=0;i<size-1;i++)
	{
	lowval=i;
	for(j=i+1;j<size;j++)
	{
	  if(a[j]<a[lowval])
	  {
	    lowval=j;
	  }
	}
	  temp=a[i];
	  a[i]=a[lowval];
	  a[lowval]=temp;
	
	}
}