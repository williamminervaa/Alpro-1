/*Saya Muhammad Cahyana Bintang Fajar NIM 2102665 mengerjakan
 soal Evaluasi 2 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//panggil library
#include <string.h>
#include <stdio.h>
//deklarasi variabel global, masing masing ada fungsinya akan dijelaskan nanti di mesin
char arr1[201][201], arr2[201][201], arr1baru[201][201], arr2baru[201][201], jam[2], menit[2], detik[2];
int jumlah[100], jumlahanagram, jam2, menit2, detik2;
//deklarassi prosedur, akan dijelaskan di mesin
void pisah(int n, char str[201][201]);
void pisah2(int n);
void sortingarr(int n);
void anagram(int n);
void pisahwaktu(char time[]);
void strtoint();
void tidurataunonton();