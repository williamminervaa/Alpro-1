#include "header.h" //library header
int main()
{

    scanf("%d", &n); //scan n untuk jumlah arr of string
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    scanf("%s", substr); //scan substring yg akan dicari

    printf("%d\n", solve()); //panggil fungsi, langsung print saja, karena berupa integer
    return 0;                // reset kode ke 0
}