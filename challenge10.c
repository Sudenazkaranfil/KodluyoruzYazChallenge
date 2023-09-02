#include <stdio.h>
#include <stdlib.h>

//🙌🏼 Easy: Bir dizi tanımladıktan sonra bu dizinin içinden en büyük sayıyı bulan kod parçacığını yazar mısın?

int main()
{
    int uzunluk;
    printf("Dizi eleman sayisini giriniz: ");
    scanf("%d", &uzunluk);

    int dizi[uzunluk];

    printf("Dizi elemanlarini giriniz: ");
    for(int i=0; i<uzunluk; i++)
    {
        scanf("%d", &dizi[i]);
    }

    int enBuyukEleman = dizi[0]; //gecici atama

    for(int i=0; i<uzunluk; i++)
    {
        if(dizi[i]>enBuyukEleman)
        {
            enBuyukEleman = dizi[i];
        }
    }
    printf("dizinin en buyuk elemani: %d", enBuyukEleman);
    return 0;
}


//🌟Medium:  Bir dizi oluşturup içindeki sayıların en büyük ve en küçük değerlerini bulan ve ekrana yazdıran bir kod parçacığı yazar mısınız?
#define BOYUT 5
int main()
{
    int dizi[BOYUT], temp, i,k;

    printf("Dizi elemanlarini giriniz(5): ");
    for(int j=0; j<BOYUT; j++)
    {
        scanf("%d", &dizi[j]);
    }

    for(i=0; i<BOYUT; i++)
    {
        if(dizi[i]>dizi[i+1])
        {
            temp = dizi[i];
            dizi[i] = dizi[i+1];
            dizi[i+1] = temp;
        }
    }
    printf("En kucuk eleman %d'dir.\n", dizi[0]);
    printf("En buyuk eleman %d'dir.\n", dizi[BOYUT -1]);
    return 0;
}
