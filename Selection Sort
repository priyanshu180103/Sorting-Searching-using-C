#include <stdio.h>
int main()
{
  int arr[100], n, i, j, pos, t;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  for (i = 0; i < (n - 1); i++) // finding minimum element (n-1) times
  {
    pos = i;

    for (j = i + 1; j < n; i++)
    {
      if (arr[pos] > arr[j])
        pos = j;
    }
    if (pos != i)
    {
      t = arr[i];
      arr[i] = arr[pos];
      arr[pos] = t;
    }
  }

  printf("  Sorted list:\n");

  for (i = 0; i < n; i++)
    printf("  %d  ", arr[i]);

  return 0;
}
