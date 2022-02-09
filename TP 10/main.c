/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Tugas Praktikum 10 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "header.h"
int main()
{ //deklarasi variabel untuk n, m, kode / geser berapa kali, string dan arahnya maju atau mundur
    int n, m, kode[1000];
    char str[1000], arah[10];
    //scan
    scanf("%d %d %s", &n, &m, str);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &kode[i]);
    }
    scanf("%s", arah);
    //panggil prosedur ke main
    geser(str, n, arah, kode);
    print(str);
    //panggil fungsi ke main, jika 1 maka penyamar boba bobi, dan seterusnya
    if (cektipe(str, m, arah) == 1)
    {
        printf("Penyamar       : Boba dan Bobi\n");
    }
    else if (cektipe(str, m, arah) == 2)
    {
        printf("Penyamar       : Itheas\n");
    }
    else if (cektipe(str, m, arah) == 3)
    {
        printf("Penyamar       : Peter\n");
    }
    //reset kode
    return 0;
}