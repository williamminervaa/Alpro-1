#include "header.h"
//langkah pertama adalah kita pisahkan string input ke arr1 dan arr2
//contohnya Bintang?Fajar, Bintang akan pergi ke arr1 dan Fajar ke arr2
void pisah(int n, char str[201][201])
{
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (str[i][j] != '?' && str[i][j] != '\0') //jika dia bertemu ? maka while akan berhenti
        {
            arr1[i][j] = str[i][j];
            j++;
        }
        arr1[i][j] = '\0'; //tutup str
        int k = 0;         //lalu j lanjutkan dari yg tadi
        while (str[i][j] != '\0')
        {
            arr2[i][k] = str[i][j + 1]; // j+1 karena jika tidak j+1, si underskornya kabawa
            j++;
            k++;
        }
        arr2[i][k] = '\0';
    }
}
/*disini kita akan menghapus underskor, caranya adalah ketika si array menemukan underskor, maka skip alias tambahkan iterasi
di indexnya, setelah itu, di prosedur ini terdapat konversi kapital ke huruf kecil*/
void pisah2(int n)
{
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        int j = 0;
        while (arr1[i][j] != '\0') //ini adalah proses penghapusan underskor, saya memakai array baru untuk memindahkannya
        {

            if (arr1[i][j] == '_')
            {
                j++;
            }
            arr1baru[i][k] = arr1[i][j];

            j++;
            k++;
        }
        arr1[i][k] = '\0';
    }
    for (int i = 0; i < n; i++) //prosesnya sama seperti yang tadi
    {
        int k = 0;
        int j = 0;
        while (arr2[i][j] != '\0')
        {

            if (arr2[i][j] == '_')
            {
                j++;
            }
            arr2baru[i][k] = arr2[i][j];

            j++;
            k++;
        }
        arr2[i][k] = '\0';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(arr1baru[i]); j++)
        {
            if (arr1baru[i][j] >= 'A' && arr1baru[i][j] <= 'Z') //ini konversinya, jika kapital tambahkan ascci +32 agar menjadi huruf kecil
            {
                arr1baru[i][j] += 32;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(arr2baru[i]); j++)
        {
            if (arr2baru[i][j] >= 'A' && arr2baru[i][j] <= 'Z') //sama seperti yang tadi, jadi jika kapital maka +32
            {
                arr2baru[i][j] += 32;
            }
        }
    }
}
/*disini saya menggunakan bubble sort,agar kedua string sama ketika dibandingkan dengan strcmp, algoritmanya 
sama seperti yang saya pakai saat praktikum waktu itu mencari nilai maks kedua dll, jadi dia akan menukar nukar huruf berdasarkan abjad
misal dari bcad jadi abcd*/
void sortingarr(int n)
{
    char temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(arr1baru[i]) - 1; j++)
        {
            for (int k = j + 1; k < strlen(arr1baru[i]); k++)
            {
                if (arr1baru[i][j] >= arr1baru[i][k]) //contohnya ketika dcb, karena d lebih besar dari c, maka tukar
                {
                    temp = arr1baru[i][j];           //caranya adalah taroh d di temp dulu
                    arr1baru[i][j] = arr1baru[i][k]; //lalu ganti tempat d tadi dengan c,
                    arr1baru[i][k] = temp;           //setelah itu tempat c isi dengan temp alias d
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(arr2baru[i]) - 1; j++) //lakukan lg untuk array yg kedua
        {
            for (int k = j + 1; k < strlen(arr2baru[i]); k++)
            {
                if (arr2baru[i][j] >= arr2baru[i][k])
                {
                    temp = arr2baru[i][j];
                    arr2baru[i][j] = arr2baru[i][k];
                    arr2baru[i][k] = temp;
                }
            }
        }
    }
}
/*disini saya akan membandingkan antara string 1 dengan string 2 dengan strcmp*/
void anagram(int n)
{
    jumlahanagram = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < strlen(arr1baru[i]); j++)
        {
            if (strcmp(arr1baru[i], arr2baru[i]) == 0) //jika sama, tandai, atau masukkan ke array jumlah dengan penanda 1, penanda dimasukkan ke array karena cek sesuai jumlah n
            {
                jumlah[i] = 1;
            }
            else
            {
                jumlah[i] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (jumlah[i] == 0) //jika tidak sama maka bukan anagram, penandanya 0,
        {
            printf("Bukan Anagram!\n");
        }
        else
        {
            jumlahanagram++; //jika sama print anagram, dan jumlahkan jumlah anagram, karena akan terpakai nanti di akhir
            printf("Anagram!\n");
        }
    }
}
/*pisahkan dulu waktu agar mudah saat convert string ke integernya, konsepnya sama seperti yang tadi diatas*/
void pisahwaktu(char time[])
{
    int i = 0;
    int j = 0;
    while (time[i] != ':' && time[i] != '\0')
    {
        jam[j] = time[i];
        i++;
        j++;
    }
    j = 0;
    while (time[i + 1] != ':' && time[i] != '\0')
    {
        menit[j] = time[i + 1];
        i++;
        j++;
    }
    j = 0;
    while (time[i + 2] != ':' && time[i] != '\0')
    {
        detik[j] = time[i + 2];
        i++;
        j++;
    }
}
//lalu disini saat mengconvert str ke int, karena cuman bisa satu digit, jadi saya akalin dengan mengconvert satu satu/perdigit
void strtoint()
{
    int temp;
    jam2 = 0;
    jam2 = jam[0] - '0';
    temp = menit[0] - '0';
    temp *= 10; //digit yg awal dikali dengan 10 agar bisa ditambahkan, contoh digit 1=2, digit 2=8, jika langsung dijumlahkan maka 10, jadi 2nya dikali dulu
                // dengan 10, agar 20+8=28
    menit2 += temp + (menit[1] - '0');
    temp = detik[0] - '0';
    temp *= 10;
    detik2 += temp + (detik[1] - '0');
}
/*yang terakhir~~, cek palindrom atau tidaknya, contoh angka 123
maka taroh remainder= 123%10 alias 3, lalu 3 dikali 10 jadi 30 dan akan ditambah dengan 2, loop proses ini*/
void tidurataunonton()
{
    int jumlahsemua = 0, remainder, reversed = 0, ori;
    jam2 *= 3600;                                         //konvert ke detik
    menit2 *= 60;                                         //ini juga sama
    jumlahsemua = jumlahanagram + jam2 + menit2 + detik2; //jumlahkan semua waktu+total anagram kalimat
    ori = jumlahsemua;
    while (jumlahsemua != 0) //ini proses yg dijelaskan di atas
    {
        remainder = jumlahsemua % 10;
        reversed = reversed * 10 + remainder;
        jumlahsemua /= 10;
    }
    if (reversed == ori) //jika palindrom maka lanjut jika tidak yaaaaa timdur
    {
        printf("\nLanjut Nonton\n");
    }
    else
    {
        printf("\nTidur\n");
    }
}
//sekian terimagajihhhh