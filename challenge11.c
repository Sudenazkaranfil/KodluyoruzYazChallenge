#include <stdio.h>
#include <stdlib.h>


//🙌🏼 Easy: Kullanıcıdan aldığınız bir sayının faktöriyelini hesaplayan kod parçacığını yazmanızı istiyorum.

int main()
{
    int sayi, temp=1;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    for(int i=1; i<=sayi; i++)
    {
        temp = temp*i;
    }
    if(sayi>=1)
    {
        printf("Girdiginiz sayinin faktoriyeli: %d! = %d", sayi, temp);
    }
    else
    {
        printf("Lutfen 0'dan buyuk sayilar giriniz.");
    }
    return 0;
}


//🌟Medium:  Bir dizi oluşturup bu sayıların ortalamasını hesaplayan bir kod parçacığı yazar mısın?
#define BOYUT 5
int main()
{
    int dizi[BOYUT], ortalama;
    int toplam = 0;

    printf("Dizi elemanlarini giriniz(5): ");
    for(int i=0; i<BOYUT; i++)
    {
        scanf("%d", &dizi[i]);
    }

    for(int i=0; i<BOYUT; i++)
    {
        toplam = toplam + dizi[i];
    }

    ortalama = toplam/BOYUT;

    printf("Dizi elemanlarinin ortalamasi: %d", ortalama);
    return 0;
}
