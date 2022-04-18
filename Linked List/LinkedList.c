#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    int data;
    struct node *next;
};

struct node *head;


void awal()
{
    struct node *ptr;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node*));
    if(ptr == NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Masukkan data: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n Data berhasil disimpan di NODE awal!");
    }
}

void hapusAwal()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("LISTNYA KOSONG BWANG!\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNODE awal berhasil dihapus!\n");
    }
}

void akhir()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node*));
    if(ptr == NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Masukkan data: ");
        scanf("%d", &item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr->next = head;
            head = ptr;
            free(ptr);
            printf("Berhasil simpan node akhir!");
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp ->next;
            }
            temp ->next = ptr;
            ptr->next = NULL;
            printf("Berhasil simpan node akhir\n");
        }
    }
}
void hapusAkhir()
{
    struct node *ptr, *temp;
    if (head == NULL)
    {
        printf("\nList kosong mass\n");
    }
    else
    {
        ptr->next = head;
        head = ptr;
        free(ptr);
        printf ("\berhasil terhapus\n");
    }
}
void hapusSembarang()
{
    struct node *ptr,*temp,*temp2;
    char *data1;
    if(head == NULL)
    {
        printf("LISTNYA KOSONG BWANG!\n");
    }
    else
    {
        if (head->next != NULL)
        {
            temp = head;
            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }
            ptr = temp->next;
            data1 = ptr->data;
            temp->next = NULL;
            free(ptr);
        } else {
            data1 = head->data;
            head = NULL;
        }
        printf("NODE sembarang berhasil dihapus!");
    }
}
void sembarang()
{
    struct node *ptr, *temp;
    int item, loc, i;

    ptr = (struct node*) malloc(sizeof(struct node*));
    if (ptr==NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Masukan data : ");
        scanf("%d", &item);
        ptr->data = item;
        printf("mau simpan di lokasi berapa ? ");
        scanf("%d", &loc);
        temp = head;
        for(i=0; i<loc; i++)
        {
            temp = temp->next;
            if(temp==NULL)
            {
                printf("Tidak bisa simpan datamu!");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("NODE berhasil disimpan\n");
    }
}

void cetak()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("LISTNYA KOSONG BWANG! ");
    }
    else
    {
        printf("Cetak isi list...");
        while(ptr != NULL)
        {
            printf("\n%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int pilihan;
    while(pilihan != 8)
    {
        system("cls");
        printf("******* MENU LATIHAN LINKED LIST ********\n");
        printf("=========================================\n");
        printf("1. Input Data di Awal\n2. Input Data di Akhir\n3. Input Data Sembarang\n4. Lihat Data dalam Linked List\n5. Hapus Data Awal\n6.Hapus Data Akhir\n7.Hapus Data Sembarang\n8. Keluar\n");
        printf("Pilihanmu? ");
        scanf("%d", &pilihan);

        switch(pilihan)
        {
            case 1:
                system("cls");
                awal();
                getch();
                break;

            case 2:
                system("cls");
                akhir();
                getch();
                break;

            case 3:
                system("cls");
                sembarang();
                getch();
                break;

            case 4:
                system("cls");
                cetak();
                getch();
                break;

            case 5:
                system("cls");
                hapusAwal();
                getch();
                break;

            case 6:
                system("cls");
                hapusAkhir();
                getch();
                break;

            case 7:
                system("cls");
                hapusSembarang();
                break;

            case 8:
                exit(0);

            default:
                printf("\nSilihkan pilih yang benar!");

        }
    }
}
