#include "header.h" //library
int solve()
{
    int count = 0, sama; //deklarasi variabel yg akan dicari untuk menghitung substring
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= strlen(str[i]) - strlen(substr); j++) //perulangan for j dengan batas str - substr karena nantinya akan dijumlahkan lagi
        {
            sama = 0; //deklarasi sama di perulangan karena sama ini akan dipakai untuk menghitung di suatu string
            for (int k = 0; k < strlen(substr); k++)
            {
                if (str[i][j + k] == substr[k]) //disini dijumlahkan lagi sehungga jumlahnya tetap sepanjang str awal
                {
                    sama++; //jika menemukan char berjajar yg sama persis dengan substring, maka tambahkan terus ke sama
                }
            }
            if (sama == strlen(substr)) //jika sama==substr artinya, ada substring yg ditemukan
            {
                count++; //tambahkan ini karena ini yg menjadi jumlah akhir
            }
        }
    }
    return count; //kembalikan nilai count ke main
}