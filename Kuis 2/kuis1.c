/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal kuis 2 grostr21 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//menggunakan library string karena akan terpakai
#include <stdio.h>
#include <string.h>

//kodingan utama
int main()
{
    int n, panjang[201]; //deklarasi variabel untuk mencari maksimal panjang string dan masukkan n
    char str[201][201];  //deklarasi variabel array ofstring
    scanf("%d", &n);
    int max = 0; //variabel mencari maksimum

    /*scan string lalu cari maksimumnya, tujuannya adalah agar terpakai di saat print spasi, karena panjangnya
    itu batasnya string maksimal*/
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        panjang[i] = strlen(str[i]);
        if (panjang[i] > max)
        {
            max = panjang[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < max - strlen(str[i]); j++) // print spasi dengan batas maximum-panjang string, sehingga spasinya akan mengikuti string terpanjang
        {
            printf(" ");
        }
        for (int j = strlen(str[i]) - 1; j >= 0; j--) // print reverse, jadi di print dari belakang menggunakan decreement
        {
            printf("%c", str[i][j]);
        }
        printf("\n");
        if ((strlen(str[i + 1]) < strlen(str[i])) && i != n - 1) //ini adalah kondisi dimana string setelahnya kurang dari string sebelumnya, jadi kita print newline pengecualian di line akhir, agar newline tetap 1
        {
            printf("\n");
        }
    }
    //mengembalikkan kode ke 0
    return 0;
}