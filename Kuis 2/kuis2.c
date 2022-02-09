/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal kuis 2 strgg21 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include <stdio.h>
#include <string.h>

//kodingan utama
int main()
{
    char str[1000];                                        //deklarasi variabel untuk string utama
    char g[100], sukukata[100], ganjil[1000], genap[1000]; //deklarasi variabel untuk masukkan genap/ganjil, sukukata yg akan dicek, dan juga variabel tampungan genap ganjil
    int d;                                                 // deklarasi var untuk panjang suku kata
    int k = 0, j = 1;                                      //ini variabel untuk iterasi, memasukkan string ke array tampungan baru yaitu genap dan ganjil
    scanf("%s %s %d %s", str, g, &d, sukukata);
    int i = 0;
    while (i < strlen(str) && str[i] != '\0') // masukkan ke array tampungan, iterasinya +=2 karena ganjil/genap selalu bertambah 2
    {
        ganjil[i] = str[k];
        k += 2;
        genap[i] = str[j];
        j += 2;
        i++;
    }
    /*ini fungsinya menutup string di indeks akhirnya, jika string tidak ditutup, maka
    akan keluar character random, jadi kita masukkan null di strlen str/2, dan jika itunya ganjil maka ada+1
    */
    if (strlen(str) % 2 == 0)
    {
        genap[strlen(str) / 2] = '\0';
        ganjil[strlen(str) / 2] = '\0';
    }
    else
    {
        genap[strlen(str) / 2] = '\0';
        ganjil[strlen(str) / 2 + 1] = '\0';
    }
    //deklarasi variabel untuk menghitung kata yg sama
    int count = 0;
    int sama;
    /*ini adalah algoritma untuk menghitung sukukata yang sama didalam string ganjil/string, jadi pertama cocokkan dulu, setelah itu
    jika panjang yg sama== panjang sukukata atau variabel d, maka count++, hitung jumlah yg samanya, ulang lagi dari awal, bikin 2 kondisi
    dimana ganjil dan juga genap*/
    if (strcmp(g, "ganjil") == 0) //kondisi jika masukkan g = genap, memakai fungsi strcmp
    {
        for (i = 0; i < strlen(ganjil); i++) //for i batasnya strlen ganjil
        {
            sama = 0; //reset sama ke 0 lagi
            for (int j = 0; j < strlen(sukukata); j++)
            {

                if (ganjil[i + j] == sukukata[j]) //ini cek variabel yg samanya
                {
                    sama++;
                }
            }
            if (sama == d) //ini hitung jumlah yg samanya
            {
                count++;
            }
        }
    }
    else // sama seperti yang tadi
    {
        for (i = 0; i < strlen(genap); i++)
        {
            sama = 0;
            for (int j = 0; j < strlen(sukukata); j++)
            {

                if (genap[i + j] == sukukata[j])
                {
                    sama++;
                }
            }
            if (sama == d)
            {
                count++;
            }
        }
    }
    //print genap jika masukkannya genap, dan ganjil jika ganjil, menggunakan fungsi strcmp
    if (strcmp(g, "genap") == 0)
    {
        printf("%s\n", genap);
    }
    else
    {
        printf("%s\n", ganjil);
    }
    // print jumlah sukukata yg samanya
    printf("%d\n", count);
    //reset kode ke 0
    return 0;
}