#include<stdio.h>
int main()
{
  int a[50],pos,i,n;
  printf("Enter the no of elements:");
  scanf("%d",&n);
  printf("Enter the array elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("delete an element from an array:");
  scanf("%d",&pos);
  for(i=pos-1;i<n;i++)
  {
   a[i]=a[i+1];
  }
  printf("array is:");
  for(i=0;i<=n;i++)
  {
  printf("%d\t",a[i]);
  }
  return 0;
  }
  
