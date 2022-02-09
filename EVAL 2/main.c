#include "header.h" //panggil header
int main()
{
    char str[201][201], time[201]; //deklarasi variabel yang akan di scan
    int n;                         //jumlah testcase
    //scan
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    scanf("%s", time);
    //panggil prosedur ke main
    pisah(n, str);
    pisah2(n);
    sortingarr(n);
    anagram(n);
    pisahwaktu(time);
    strtoint();
    tidurataunonton();
    //reset kdoe ke 0;
    return 0;
}