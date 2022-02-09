/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal kuis 3 nomer 2 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "header.h" // panggil header
int maxstring(int n)
{
    int max = -999999; //deklarasi variabel untuk maksnya
    for (int i = 0; i < n; i++)
    {
        if (panjang[i] > max) //jika panjang string>max, maka ganti isi maks dengan panjang string
        {
            max = panjang[i];
        }
    }
    return max; //kembalikan nilai maks
}
void print(int n) //prosedur print
{
    for (int i = 0; i < n; i++)                                 //perulangan sesuai n untuk print kebawahnya
    {                                                           //panggil fungsi max tadi ke batas
        for (int j = 0; j < maxstring(n) - strlen(str[i]); j++) //print spasi dengan max dikurangi panjangstring agar rata kanan
        {
            printf(" ");
        }
        if (strlen(str[i]) % 2 == 1) //jika dia ganjil, maka print dari belakang
        {
            for (int j = strlen(str[i]) - 1; j >= 0; j--) //print menggunakan for decreement
            {
                printf("%c", str[i][j]);
            }
        }
        else //jika dia genap maka bagi 2 dulu
        {
            for (int j = strlen(str[i]) / 2; j < strlen(str[i]); j++) // pertama kita print dari tengah ke akhir string
            {
                printf("%c", str[i][j]);
            }
            for (int j = 0; j < strlen(str[i]) / 2; j++) //lalu print dari awal ke tengah string
            {
                printf("%c", str[i][j]);
            }
        }
        printf("\n"); //print newline
    }
}