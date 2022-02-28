#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void exchangesort();
void bubblesort();
void kembali();

//Revo Bintang Samasto
//672021129 (NIM GANJIL)

int main()
{
    int pilih;
    printf("XXXXX SORTING XXXXX\n");
    printf("1. Exchange Sort\n");
    printf("2. Bubble Sort\n");
    printf("3. Exit\n");
    printf("Pilihanmu\t: ");
    scanf("%d",&pilih);
    switch(pilih)
    {
        case 1:
        exchangesort();
        break;

        case 2:
        bubblesort();
        break;

        case 3:
        exit(0);
        break;

        default:
        printf("Inputan salah");
        getch();
        main();
        break;
    }

}
void bubblesort()
{
    system ("cls");
    int i,j,angka[]={23,65,30,8,33,24,76,7};
    int n=sizeof(angka)/sizeof(angka[0]);
    int tempo;
    printf("\nXXXXX BUBBLE SORT XXXXX\n");
    printf("\nAngka awal : 23 65 30 8 33 24 76 7\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-i-1; j++)
            {
            if (angka[j] > angka[j+1])
            {
                tempo = angka[j];
                angka[j] = angka[j+1];
                angka[j+1] = tempo;
            }
        }
    }
    printf("\nHasil (ascending) :\n");
    for(int i=0;i<n;++i)
    {
        printf("%d ", angka[i]);
    }
    printf("\n");
    kembali();
}
void exchangesort()
{
    system ("cls");
    int i,j,angka[]={23,65,30,8,33,24,76,7};
    int n=sizeof(angka)/sizeof(angka[0]);
    int tempo;
    printf("\nXXXXX EXCHANGE SORT XXXXX\n");
    printf("\nAngka awal : 23 65 30 8 33 24 76 7\n");
    for (i=0;i<n-1;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(angka[i]>angka[j])
            {
                tempo = angka[i];
                angka[i] = angka[j];
                angka[j] = tempo;
            }
        }
    }
    printf("\nHasil (ascending) :\n");
    for(int i=0;i<n;++i)
    {
        printf("%d ", angka[i]);
    }
    printf("\n");
    kembali();
}
void kembali()
{
    printf("\n\npress anything to continue ! ! !\n");
    getch();
    system("cls");
    main();
}
