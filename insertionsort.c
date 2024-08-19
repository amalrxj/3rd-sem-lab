#include <stdio.h>
int main()
{
  int a[25], i, n, key, j;
  printf("Enter The Size Of The Array: ");
  scanf("%d", &n);
  printf("Enter The Elements Of The Array: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 1; i < n; i++)
  {
    key = a[i];
    j = i - 1;
    while (j >= 0 && a[j] > key)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }
  printf("sorted array:\t ");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", a[i]);
  }
  return 0;
}
