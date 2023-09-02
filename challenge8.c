#include <stdio.h>
#include <stdlib.h>

//🙌🏼 Easy: Kullanıcıdan aldığın sayının karesini hesaplayarak ekrana yazdıran kod parçacığını yazar mısın?

int main()
{
    int sayi, kareHesaplama;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    kareHesaplama= sayi*sayi;

    printf("%d'nin karesi %d'dir.", sayi, kareHesaplama);
    return 0;
}



//🌟Medium:  Oluşturduğunuz bir dizinin medyanını hesaplayan bir kod parçacığı yazar mısınız?
#define BOYUT 5
int main()
{
    int dizi[BOYUT], temp, medyan;

    printf("Dizinin elemanlarini giriniz: ");
    for(int i=0; i<BOYUT; i++)
    {
        scanf("%d", &dizi[i]);
    }

    for(int i=0; i<BOYUT; i++)
    {
        for (int j=0;j<BOYUT - 1;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
            }
        }
    }

    printf("\ndizi elemanlarinin kucukten buyuge siralanisi: \n");
    for(int i=0; i<BOYUT; i++)
    {
        printf("%d", dizi[i]);
    }

    if(BOYUT%2==0)
    {
        medyan = (dizi[(BOYUT/2)-1]+dizi[(BOYUT/2)+1])/2;
    }
    else
    {
        medyan = dizi[(BOYUT/2)];
    }

    printf("\nDizinin medyani: %d", medyan);
    return 0;
}
