#include <stdio.h>
#include <stdlib.h>

//🙌🏼 Easy: Kullanıcıdan aldığınız sayının tek mi çift mi olduğunu ekrana yazdıran bir kod parçacığı yazar mısın?

int main()
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if(sayi%2==0)
    {
        printf("%d bir cift sayidir.\n", sayi);
    }
    else
    {
        printf("%d bir tek sayidir.\n", sayi);
    }
    return 0;
}



//🌟Medium: Bir dizi oluşturup içindeki çift sayıların toplamını hesaplayan bir kod parçacığı yazar mısınız?

int main()
{
    int sayiDizisi[5];
    int toplam=0;

    printf("5 elemanli dizinin sayilarini giriniz: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &sayiDizisi[i]);
    }

    for(int i=0; i<5; i++)
    {
        if(sayiDizisi[i]%2==0)
        {
            toplam = toplam + sayiDizisi[i];
        }
    }

    printf("Dizi icerisindeki cift sayilarin toplami: %d", toplam);
    return 0;
}
