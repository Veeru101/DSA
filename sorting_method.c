#include<stdio.h>
int main()
{
int arr[50],i,j,len;
srand(getpid());
for(i=0;i<50;i++)
{
arr[i]=rand()%100;
}
for(i=0;i<50;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
for(i=0;i<50;i++)
{
for(j=0;j<50-i-1;j++)
{
 if(arr[j]>arr[j+1])
 {
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
 }
}
}
for(i=0;i<50;i++)
{
printf("%d ",arr[i]);
}
}

