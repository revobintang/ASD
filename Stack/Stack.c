#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAX_STACK 3

typedef struct
{
    int top;
    char data[3][3];
}STACK;

STACK tumpuk;

void inisialisasi()
{
    tumpuk.top = -1;
}

int isFull()
{
    if(tumpuk.top == MAX_STACK - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if(tumpuk.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(char dt[3])
{
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top], dt);
}

void pop()
{
    printf("Daya yang diambil = %s\n", tumpuk.data[tumpuk.top]);
    tumpuk.top--;
}

void tampil()
{
    for(int i=tumpuk.top; i>=0 ; i--)
    {
        printf("Data : %s\n", tumpuk.data[i]);
    }
}
void clear()
{
    tumpuk.top = -1;
}
int main()
{
    int pilihan;
    inisialisasi();
    char Data[3];
    do
    {
        printf("1. Push Data\n");
        printf("2. Pop Data\n");
        printf("3. Cetak isi Data\n");
        printf("4. Hapus isi Data\n");
        printf("5. Exit\n");
        printf("Pilihan : ");
        scanf("%d", &pilihan);
        switch(pilihan)
        {
            case 1:
            if(isFull() !=1)
            {
                printf("Data yang ingin disimpan = ");
                scanf("%s", &Data);
                push(Data);
            }
            else
            {
                printf("Array STACK sudah penuh!\n");
            }
            break;

            case 2:
            if(isEmpty()!= 1)
            {
                pop();
            }
            else
            {
                printf("Masih Kosong!\n");
            }
            break;

            case 3:
                if(isEmpty()!= 1)
                {
                    tampil();
                }
                else
                {
                    printf("Masih Kosong!\n");
                }
                break;

            case 4:
                clear();
                printf("Array stack sudah kosong\n");
                break;
        }
    }
    while(pilihan != 5);
    printf("Keluar dari program!!\n");
    getch();
}
