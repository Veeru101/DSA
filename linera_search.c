#include <stdio.h>
int main()
{
int arr[25], n, data, i, flag = 0 ;
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the elements:"); 
for(i =0 ; i < n; i++)
scanf("%d",&arr[i]);
printf("Enter the element to be Searched: ");
scanf("%d",&data);
for(i = 0 ; i < n; i++)
{
if(arr[i]==data)
{
flag=1;
break;
}
}
if(flag==1)
printf("Data found at location: %d" ,(i+1));
else
printf("Data not found");
}
