#include <stdio.h>
int main()
{
  int i, n, a[50], m, key, j, temp;
  printf("Enter The Size ");
  scanf("%d", &n);
  printf("Enter the elements ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++)
  {
    key = a[i];
    m = i;
    for (j = i + 1; j < n; j++)
    {
      if (key > a[j])
      {
        key = a[j];
        m = j;
      }
    }
    temp = a[m];
    a[m] = a[i];
    a[i] = temp;
  }
  printf("After Sorting: ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}
