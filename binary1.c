#include <stdio.h>
int main()
{
  int i, n, a[50], low = 0, high = n, mid, item;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter the elements to search: ");
  scanf("%d", &item);
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (mid == item)
    {
      printf("element is found at the position:");
      break;
    }
    else if (item > a[mid])
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  if (low > high)
  {
    printf("Element is not found");
  }
  return 0;
}
