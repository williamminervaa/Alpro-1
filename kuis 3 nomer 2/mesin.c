/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal kuis 3 nomer 1 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "header.h" // panggil header
void hitungluas(int n, segitiga data[])
{
    int luas = 0; //deklarasi variabel luas
    for (int i = 0; i < n; i++)
    {
        if (data[i].a > data[i].b && data[i].a > data[i].c) //jika a adalah yang terbesar artinya dia sisi miring
        {
            luas = (data[i].b * data[i].c) / 2; //luasnya b kali c bagi 2
            miring[i] = data[i].a;              //dan sisi miringnya  adalah a
        }
        else if (data[i].b > data[i].a && data[i].b > data[i].c) //jika b yg terbesar
        {
            luas = (data[i].a * data[i].c) / 2; //luasnya a kali c bagi 2
            miring[i] = data[i].b;              // dan sisi miringnya adalah b
        }
        else
        {
            luas = (data[i].a * data[i].b) / 2; // jika c adalah yg terbesar, luasnya a kali b bagi 2
            miring[i] = data[i].c;              //maka sisi miringnya adalah c
        }

        simpanluas[i] = luas; //simpan luas tadi di array
    }
}
int carimax(int n) //fungsi cari luas maksimum segitiga
{
    int max = -99999999; //deklarasi variabelmax
    for (int i = 0; i < n; i++)
    {
        if (simpanluas[i] > max) // jika luas[i]> max, maka ganti max dengan luas yg baru, ulangi proses ini sesuai n
        {
            max = simpanluas[i];
        }
    }
    return max; //kembalikan max
}
int maxmiring(int n) //fungsi mencari max sisi miring, konsepnya sama seperti yang tadi
{
    int max = -99999999; //deklarasi variabel max
    for (int i = 0; i < n; i++)
    {
        if (miring[i] > max) //jika miring[i]>max, maka ganti max dengan miring yg baru, ulangi proses ini sesuai n
        {
            max = miring[i];
        }
    }
    return max; //kembalikan max
}