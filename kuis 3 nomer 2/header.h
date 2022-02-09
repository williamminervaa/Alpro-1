/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal kuis 3 nomer 1 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include <stdio.h>   //library
int simpanluas[200]; //variabel untuk menyimpan luas
int miring[200];     //variabel untuk menyimpang sisi miring
typedef struct       //tipe bentukan untuk menyimpan inputan a,b,c
{
    int a, b, c;
} segitiga;
void hitungluas(int n, segitiga data[]); //prosedur untuk menghitung luas
int carimax(int n);                      // fungsi untuk mencari max luas segitiga
int maxmiring(int n);                    // fungsi untuk mencari max sisi miring