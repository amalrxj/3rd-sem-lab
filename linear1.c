#include <stdio.h>
int main()
{
  int n, i, pos, item, a[25];
  printf("Enter no of elements of the array: ");
  scanf("%d", &n);
  printf("Enter the elements of array: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter the element to be search :");
  scanf("%d", &item);
  for (pos = 0; pos < n; pos++)
  {
    if (item == a[pos])
    {
      printf("Element found at the position %d\n ", pos + 1);
      printf("Comparison=%d\n", pos + 1);
      break;
    }
  }
  if (pos == n)
  {
    printf("Element not found!\n");
    printf("No of comparison=%d\n", n);
  }
  return 0;
}
