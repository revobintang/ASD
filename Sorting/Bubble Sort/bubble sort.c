#include <stdio.h>
void bubbleSortAscending();
void bubbleSortDescending();

int main()
{
    int arr[100], n,k=1, i, j;
    printf("Masukkan jumlah angka : ");
    scanf("%d", &n);

        for(i = 0; i < n; i++)
        {
            printf("Masukkan angka ke-%d : ", k);
            k++;
            scanf("%d", &arr[i]);
        }
        printf("\n");

    bubbleSortAscending(arr, n);

    printf("Hasil ascending : \n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

    bubbleSortDescending(arr,  n);

    printf("Hasil descending : \n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
}
void bubbleSortAscending(int arr[], int n)
{
    int i, j, tmpt;
    for (i = 0; i < n; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                tmpt = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmpt;
            }
        }
    }
}
void bubbleSortDescending(int arr[], int n)
{
    int i, j, tmpt;
    for (i = 0; i < n; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] < arr[j+1]){
                tmpt = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmpt;
            }
        }
    }
}
