#include <stdio.h>
void selectionSortAscending();
void selectionSortDescending();

int main()
{
  int arr[100], n, k=1, i, j;
  printf("Masukkan jumlah angka : ");
  scanf("%d", &n);

  for(i = 0; i < n; i++)
    {
        printf("Masukkan angka ke-%d : ", k);
        k++;
        scanf("%d", &arr[i]);
    }
    printf("\n");

  selectionSortAscending(arr, n);

  printf("Hasil pengurutan (Ascending) : \n");

  for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
  printf("\n");

  selectionSortDescending(arr, n);

  printf("Hasil pengurutan (descending) : \n");
  for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selectionSortAscending(int arr[], int n)
{
  int i, j, tmpt, tukar;
  for(i = 0; i < (n-1); i++)
    {
    tmpt = i;
    for (j = i + 1; j < n; j++)
     {
        if(arr[tmpt] > arr[j])
        {
            tmpt = j;
        }
     }
    if(tmpt != i)
    {
      tukar = arr[i];
      arr[i] = arr[tmpt];
      arr[tmpt] = tukar;
    }
  }
}
void selectionSortDescending(int arr[], int n)
{
  int i, j, tmpt, tukar;
  for(i = 0; i < (n-1); i++)
    {
    tmpt = i;
    for (j = i + 1; j < n; j++)
     {
        if(arr[tmpt] < arr[j])
        {
            tmpt = j;
        }
     }
    if(tmpt != i)
    {
      tukar = arr[i];
      arr[i] = arr[tmpt];
      arr[tmpt] = tukar;
    }
  }
}
