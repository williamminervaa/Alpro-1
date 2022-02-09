/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal kuis 3 nomer 1 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "header.h" //panggil header
int main()
{
    int n;              // jumlah banyaknya testcase
    segitiga data[200]; //panggil struct

    scanf("%d", &n); //scan
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &data[i].a, &data[i].b, &data[i].c);
    }

    hitungluas(n, data);                         //panggil prosedur
    printf("%d %d\n", carimax(n), maxmiring(n)); //print max luas dan max sisi miring menggunakan fungsi
    return 0;                                    //reset kode
}