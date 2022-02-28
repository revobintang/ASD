#include <stdio.h>
void insertionSortAscending();
void insertionSortDescending();

int main()
{
  int n, arr[100],i,k=1;
  printf("Masukkan jumlah angka : ");
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
        printf("Masukkan angka ke-%d : ", k);
        k++;
        scanf("%d", &arr[i]);
    }
    printf("\n");

    insertionSortAscending(arr, n);

  printf("Hasil Ascending:\n");
  for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
  printf("\n");

    insertionSortDescending(arr, n);

  printf("Hasil Descending:\n");
  for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
  printf("\n");
  return 0;
}
void insertionSortAscending(int arr[], int n)
{
    int i, j,tmpt;
    for (i = 0; i < n; i++)
    {
        j = i;
    while(j > 0 && arr[j-1] > arr[j])
    {
        tmpt = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = tmpt;
        j--;
    }
    }
}
void insertionSortDescending(int arr[], int n)
{
    int i, j,tmpt;
    for (i = 0; i < n; i++)
    {
        j = i;
    while(j > 0 && arr[j-1] < arr[j])
    {
        tmpt = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = tmpt;
        j--;
    }
    }
}
