#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//🙌🏼 Easy: Kullanıcıdan alınan bir kelimenin uzunluğunu hesaplayan bir kod parçacığı yazar mısın?

/*int main()
{
    char kelime[20];
    int uzunluk;
    printf("Bir kelime giriniz: ");
    scanf("%s", &kelime);

    uzunluk = strlen(kelime);
    printf("Girdiginiz kelimenin uzunlugu: %d", uzunluk);
    return 0;
} */


//🌟Medium:  Kullanıcıdan aldığınız bir sayının basamaklarının toplamını hesaplayan bir kod parçacığı yazar mısın?

int main()
{
    int sayi, toplam, birlerBas, onlarBas, yuzlerBas;
    printf("Pozitif (0,1000 arasi) bir sayi giriniz: ");
    scanf("%d", &sayi);

    if(sayi>=100 && sayi<1000)
    {
        yuzlerBas = (sayi%1000)/100;
        onlarBas = (sayi%100)/10;
        birlerBas = sayi%10;
        toplam = yuzlerBas + onlarBas + birlerBas;
    }
    else if(sayi<100 && sayi>=10)
    {
        onlarBas = (sayi%100)/10;
        birlerBas = sayi%10;
        toplam = onlarBas + birlerBas;
    }
    else if(sayi<10 && sayi>0)
    {
        birlerBas = sayi%10;
        toplam = birlerBas;
    }

    printf("%d sayisinin basamaklari toplami: %d", sayi, toplam);
    return 0;
}
