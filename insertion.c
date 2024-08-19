#include <stdio.h>
int main()
{
  int a[50], pos, elem, i, n;
  printf("Enter the no of elements:");
  scanf("%d", &n);
  printf("Enter the array elements");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter the element to be insert and its position:");
  scanf("%d%d", &elem, &pos);
  for (i = n - 1; i >= pos - 1; i--)
  {
    a[i + 1] = a[i];
  }
  {
    a[i + 1] = elem;
  }
  printf("array is:");
  for (i = 0; i <= n; i++)
  {
    printf("%d\t", a[i]);
  }
  return 0;
}
