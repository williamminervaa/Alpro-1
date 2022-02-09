/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 10 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "header.h"

void geser(char str[], int n, char arah[], int kode[])
{

    if (strcmp(arah, "maju") == 0) // jika arahnya maju
    {
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] >= 97 && str[j] <= 122) //jika masukan berupa huruf kecil
            {
                for (int i = 0; i < kode[j]; i++)
                {
                    str[j]++;         // maka tambah satu satu sesuai kode yg dimasukkan
                    if (str[j] > 'z') // jika lebih dari z maka reset lagi ke a
                    {
                        str[j] = 'a';
                    }
                }
            }
            else
            {
                for (int i = 0; i < kode[j]; i++) //jika masukkan berupa huruf kapital , maka tambah satu satu, sisanya sama seperti tadi
                {
                    str[j]++;
                    if (str[j] > 'Z')
                    {
                        str[j] = 'A';
                    }
                }
            }
        }
    }
    else if (strcmp(arah, "mundur") == 0) // jika arahnya mundur maka kurangi satu satu, algoritmanya sama seperti yg tadi dikurangi satu satu
    {
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] >= 97 && str[j] <= 122) // jika berupa huruf kecil
            {
                for (int i = 0; i < kode[j]; i++)
                {
                    str[j]--;
                    if (str[j] < 'a')
                    {
                        str[j] = 'z';
                    }
                }
            }
            else
            {
                for (int i = 0; i < kode[j]; i++) //jika berupa huruf besar/kapital
                {
                    str[j]--;
                    if (str[j] < 'A')
                    {
                        str[j] = 'Z';
                    }
                }
            }
        }
    }
    str[strlen(str)] = '\0'; // terakhir, karena ini berupa string maka harus kita akhiri dengan null
}

int cektipe(char str[], int m, char arah[]) //fungsi untuk mengcek penyamar
{
    int i, j;           //deklarasi variabel untuk iterasi
    char simpankode[4]; // ini array untuk menyimpan kode

    //jika maju, maka inisialisasinya dari 0 dan ditambah sesuai m+1, lalu diakhirnya kita tutup menggunakan null
    if (strcmp(arah, "maju") == 0)
    {
        i = 0, j = 0;
        while (j < 3)
        {
            simpankode[j] = str[i];
            j++;
            i += m + 1;
        }
        simpankode[3] = '\0';
    }
    else //dan jika mundur, maka inisialisasinya dari panjang -1, sampai 0, lalu dikurang sesuai m-1, lalu tutup lagi akhirnya dengan null
    {
        i = strlen(str) - 1, j = 0;
        for (int j = 0; j < 3; j++)
        {
            simpankode[j] = str[i];
            i = (i - m) - 1;
        }

        simpankode[3] = '\0';
    }
    if (strcmp(simpankode, "bob") == 0 || strcmp(simpankode, "BOB") == 0) // jika simpankode tadi berupa bob/BOB, maka kembalikan 1 ke main
    {
        return 1;
    }
    else if (strcmp(simpankode, "its") == 0 || strcmp(simpankode, "ITS") == 0 || strcmp(simpankode, "sti") == 0 || strcmp(simpankode, "STI") == 0) //jika its/sti/STI/ITS, maka kembalikan 2
    {
        return 2;
    }
    else if (strcmp(simpankode, "ptr") == 0 || strcmp(simpankode, "PTR") || strcmp(simpankode, "rtp") == 0 || strcmp(simpankode, "RTP") == 0) // dan kembalikan 3 jika peter
    {
        return 3;
    }
}
void print(char str[])
{
    printf("Hasil dekripsi : %s\n", str); // prosedur untuk print dekripsi yang sudah digeser isinya
}
